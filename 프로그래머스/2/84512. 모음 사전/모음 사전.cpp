#include <string>
#include <vector>

using namespace std;

vector<string> dict;
string alpha = "AEIOU";

void dfs(string current)
{
    if(current.length() > 5) return;
    
    if(current != "")
        dict.push_back(current);
    
    for(int i = 0; i < 5; i++)
    {
        dfs(current + alpha[i]);
    }
}

int solution(string word) {
    dfs("");
    
    for(int i = 0; i < dict.size(); i++)
    {
        if(dict[i] == word) 
            return i+1;
    }
    
}