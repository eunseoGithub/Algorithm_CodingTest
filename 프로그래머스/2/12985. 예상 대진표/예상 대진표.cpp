#include <iostream>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 0;
    int currentA = a;
    int currentB = b;
    int count = 0;
    while(currentA != currentB)
    {
        
        currentA = (currentA + 1) / 2;
        currentB = (currentB + 1) / 2;
        count++;
    }
    

    return count;
}