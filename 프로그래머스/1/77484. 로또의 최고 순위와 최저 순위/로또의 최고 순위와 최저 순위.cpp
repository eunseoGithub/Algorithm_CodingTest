#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int Rank(int matchCount)
{
    return (matchCount >= 2) ? (7 - matchCount) : 6;
}

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int zero = 0;
    int match = 0;
    
    sort(win_nums.begin(),win_nums.end());
    
    for(int x : lottos)
    {
        if(x == 0)
        {
            zero++;
            continue;
        }
        if(binary_search(win_nums.begin(), win_nums.end(),x))
        {
            match++;
        }
    }
    int bestMatch = match + zero;
    int worstMatch = match;
    return {Rank(bestMatch), Rank(worstMatch)};
}