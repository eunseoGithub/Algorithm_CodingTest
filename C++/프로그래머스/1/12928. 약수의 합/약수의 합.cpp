#include <string>
#include <vector>
using namespace std;

int solution(int n) {
    int answer = 0;
    if( n <= 0)
        return answer;
    
    for(int i = 1 ; i <= n/2 ; i++)
    {
        if(n %i == 0)
            answer += i;
    }
    answer += n;
    return answer;
}