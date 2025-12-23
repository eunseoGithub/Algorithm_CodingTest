#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    bool endFlag = false;
    int i = 0;
    while(true)
    {
        i++;
        if(n%i == 1)
            endFlag = true;
        if(endFlag)
            break;
    }
    answer = i;
    return answer;
}