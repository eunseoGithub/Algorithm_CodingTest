#include <bits/stdc++.h>
using namespace std;
int image[502][502];
int visited[502][502];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int main() 
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    int n, m;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> image[i][j];
        }
    }
    
    int count = 0;
    int maxArea = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (image[i][j] == 0 || visited[i][j]) continue;

            count++;
            queue<pair<int, int>> q;
            visited[i][j] = true;
            q.push({ i,j });

            int area = 0;

            while (!q.empty())
            {
                pair<int, int> cur = q.front();
                q.pop();
                area++;

                for (int dir = 0; dir < 4; dir++)
                {
                    int nx = cur.first + dx[dir];
                    int ny = cur.second + dy[dir];

                    if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                    if (visited[nx][ny] || image[nx][ny] == 0) continue;

                    visited[nx][ny] = true;
                    q.push({ nx,ny });
                }
            }

            maxArea = max(maxArea, area);
        }
    }
    cout << count << '\n' << maxArea << '\n';
    return 0;
}