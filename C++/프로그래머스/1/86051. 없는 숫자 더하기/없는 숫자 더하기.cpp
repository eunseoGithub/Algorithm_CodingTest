#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    vector<bool> countNum = {0,0,0,0,0,0,0,0,0,0};
    
    for(int it : numbers)
    {
        countNum[it] = true;
    }
    int index = 0;
    for(int it : countNum)
    {
        if(!it)
        {
            answer+=index;
        }
        index++;
    }
    
    return answer;
}