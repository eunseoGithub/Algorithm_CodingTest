#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int maxCount = 0;
bool visited[9];

void dfs(int currentK, int count, const vector<vector<int>>& dungeons)
{
    if(count > maxCount)
        maxCount = count;
    
    for(int i = 0; i < dungeons.size();i++)
    {
        if(!visited[i] && currentK >= dungeons[i][0])
        {
            visited[i] = true;
            dfs(currentK-dungeons[i][1], count + 1, dungeons);
            visited[i] = false;
        }
    }
}

int solution(int k, vector<vector<int>> dungeons)
{
    int max = 0;
    for(int i = 0; i < 9; i++) 
        visited[i] = false;

    dfs(k,0,dungeons);
    
    return maxCount;
}