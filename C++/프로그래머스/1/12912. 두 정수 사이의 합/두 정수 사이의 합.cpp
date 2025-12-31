#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    int min = 0;
    int max = 0;
    
    if(a > b)
    {
        min = b;
        max = a;
    }
    else if( a == b)
    {
        return a;
    }
    else
    {
        min = a;
        max = b;
    }
    while(min<=max)
    {
        answer += min;
        min++;
    }
    
    return answer;
}