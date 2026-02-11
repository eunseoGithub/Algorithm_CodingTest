#include <string>
#include <vector>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    for(int s = 1; s <=number; s++)
    {
        int count = 0;
        for(int i = 1; i * i <=s ; i++)
        {
            if(s % i == 0)
            {
                if( i * i == s)
                {
                    count++;
                }
                else
                {
                    count += 2;
                }
            }
        }
        if(count > limit)
        {
            answer += power;
        }
        else
        {
            answer += count;
        }
    }
    return answer;
}