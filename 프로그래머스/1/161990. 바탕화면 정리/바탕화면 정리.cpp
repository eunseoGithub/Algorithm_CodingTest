#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    int n = (int)wallpaper.size();
    int m = (int)wallpaper[0].size();
    
    int minRow = n;
    int minCol = m;
    int maxRow = -1;
    int maxCol = -1;
    
    for(int i = 0; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            if(wallpaper[i][j] == '#')
            {
                minRow = min(minRow, i);
                minCol = min(minCol, j);
                maxRow = max(maxRow, i);
                maxCol = max(maxCol, j);
            }
        }
    }
    
    return {minRow, minCol, maxRow +1, maxCol +1};
}