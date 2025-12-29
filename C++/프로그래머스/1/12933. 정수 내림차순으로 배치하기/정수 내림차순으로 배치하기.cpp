#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<int> tmp;
    while(true)
    {
        if(n<10)
        {
            tmp.push_back(n);
            break;
        }
        tmp.push_back(n%10);
        n /=10;
    }
    sort(tmp.begin(),tmp.end(),[&](int a,int b)
         {
            return a < b; 
         });
    for(int i = tmp.size()-1 ; i>=0;i--)
    {
        answer+=(pow(10,i)*tmp[i]);
    }
    return answer;
}