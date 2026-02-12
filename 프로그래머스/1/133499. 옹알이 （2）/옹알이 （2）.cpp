#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    
    string babs[4] = {"aya","ye","woo","ma"};
 
    for(const string& w : babbling)
    {
        string s = w;
        int prev = -1;
        bool ok = true;
        
        while(!s.empty())
        {
            bool matched = false;
            for(int i = 0; i < 4 ; i++)
            {
                const string& p = babs[i];
                
                if(s.rfind(p,0) == 0)
                {
                    if( i == prev)
                    {
                        ok = false;
                        break;
                    }
                    prev = i;
                    s.erase(0, p.size());
                    matched = true;
                    break;
                }
            }
        if(!ok) break;
        if(!matched)
        {
            ok = false;
            break;
        }
            
        }
        
        if(ok) answer++;
    }
    return answer;
}