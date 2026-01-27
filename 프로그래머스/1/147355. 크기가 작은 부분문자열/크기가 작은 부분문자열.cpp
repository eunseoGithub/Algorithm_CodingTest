#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int pSize = p.length();
    int tSize = t.length();
    
    for(int i = 0; i <=tSize-pSize;i++)
    {
        string sub = t.substr(i,pSize);
        if(sub <= p) answer++;
    }
    return answer;
    
}