#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    int total = brown + yellow;
    for(int i = 3; i*i <=total ; ++i)
    {
        if(total % i != 0) continue;
        
        int w = total /i;
        
        if((w-2) * (i-2) == yellow)
        {
            return {w,i};
        }
    }
    return {};
}