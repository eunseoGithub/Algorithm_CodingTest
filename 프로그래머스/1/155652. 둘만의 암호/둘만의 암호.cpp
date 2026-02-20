#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    bool ban[26] = {false};
    for(char c : skip) 
    {
        ban[c - 'a'] = true;
    }
    
    vector<char> allow;
    allow.reserve(26);
    
    for(int i = 0 ; i < 26 ; ++i)
    {
        if(!ban[i])
            allow.push_back(char('a'+i));
    }
    
    int pos[26];
    for(int i = 0 ; i <26 ; ++i)
        pos[i] = -1;
    int size = allow.size();
    for(int i = 0; i < size ; ++i)
    {
        pos[allow[i]- 'a'] = i;
    }
    
    answer.reserve(s.size());
    
    for(char c : s)
    {
        int p = pos[c -'a'];
        int np = (p + index) % size;
        answer.push_back(allow[np]);
    }
    
    
    return answer;
}