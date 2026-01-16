using namespace std;
#include <stdlib.h>
long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long totalPrice = 0;
    for(int i = 1 ; i <= count ; i++)
    {
        totalPrice += i*price;
    }
    answer = totalPrice - money;
    if(answer<0)
        return 0;
    return answer;
}