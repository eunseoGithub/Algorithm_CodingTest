#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> threeTmp;
    int i = 0;
    while(n > 0)
    {
        threeTmp.push_back(n % 3);
        n /= 3;
    }
    
    //reverse(threeTmp.begin(),threeTmp.end());
    
    int size = threeTmp.size();
    for(i = 0; i < size; i++)
    {
        answer = answer * 3 + threeTmp[i];
        //answer += threeTmp[i] * pow(3,i);
    }
    
    return answer;
}