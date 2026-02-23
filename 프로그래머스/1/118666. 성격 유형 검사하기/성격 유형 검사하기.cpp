#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    unordered_map<char, int> score;
    
    int surveySize = survey.size();
    
    for(int i = 0; i < surveySize; ++i)
    {
        char left = survey[i][0];
        char right = survey[i][1];
        int c = choices[i];
        
        if(c < 4)
        {
            score[left] += (4-c);
        }
        else if (c > 4)
        {
            score[right] += (c-4);
        }
    }
    
    string ans;
    const string pairs[4] = {"RT","CF","JM","AN"};
    
    for(auto &p : pairs)
    {
        char a = p[0], b = p[1];
        if( score[a] >= score[b])
            ans.push_back(a);
        else
            ans.push_back(b);
    }
    
    return ans;
    
}