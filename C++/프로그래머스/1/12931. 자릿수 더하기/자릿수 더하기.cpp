#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    while(true)
    {
        if(n<10)
            break;
        int tmp = n%10;
        answer += tmp;
        n /= 10;
        
    }
    answer += n;
    return answer;
}