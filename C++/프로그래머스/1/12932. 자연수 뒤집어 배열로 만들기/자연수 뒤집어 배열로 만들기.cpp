#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    while(true)
    {
        answer.push_back(n%10);
        if(n == 0)
            break;
        n /= 10;
        if(n<10)
            break;
    }
    if(n>0)
        answer.push_back(n);
    return answer;
}