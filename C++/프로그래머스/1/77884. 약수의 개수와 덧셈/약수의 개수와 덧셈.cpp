#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int left, int right) {
    int answer = 0;
    int tmp = left;
    
    while(tmp <= right)
    {
        int count = 0;
        int current = tmp;
        for(int i = 1; i<=tmp/2;i++)
        {
            if(current %i==0)
            {
                count++;
            }
        }
        count++;
        if(count%2 == 0)
        {
            answer+=tmp;
        }
        else
        {
            answer-=tmp;
        }
             
        tmp++;
    }
    
    return answer;
}