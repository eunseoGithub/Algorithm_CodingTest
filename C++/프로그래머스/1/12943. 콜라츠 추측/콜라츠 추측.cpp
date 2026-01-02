#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    long long longNum = num;
    int answer = 0;
    if(longNum == 1)
        return 0;
    while(true)
    {
        if(longNum == 1)
            break;
        if(answer >= 500)
            return -1;
        
        if(longNum % 2 == 0)
        {
            longNum /= 2;
            answer++;
        }
        else if(longNum % 2 == 1)
        {
            longNum = longNum * 3 + 1; 
            answer++;
        }    
    }
    
    return answer;
}