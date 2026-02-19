#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    int INF = 101;
    vector<int> minPress(26,INF);
   
    for(const string& row : keymap)
    {
        for(int i =0; i < (int)row.size();i++)
        {
            int idx = row[i] - 'A';
            minPress[idx] = min(minPress[idx],i+1);
        }
    }
    
    vector<int> answer;
    answer.reserve(targets.size());
    
    for(const string& t : targets)
    {
        int sum = 0;
        bool ok = true;
        
        for(char c : t)
        {
            int idx = c - 'A';
            if(minPress[idx] == INF)
            {
                ok = false;
                break;
            }
            sum += minPress[idx];
        }
        answer.push_back(ok? sum : -1);
    }
    return answer;
}