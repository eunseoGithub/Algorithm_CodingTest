#include <bits/stdc++.h>
using namespace std;

int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int main() 
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    int m, n, t, k;
    
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int p[51][51] = { 0 };
        int visited[51][51] = { 0 };
        int ans = 0;
        cin >> m >> n >> k;
        for (int j = 0; j < k; j++)
        {
            int l, m;
            cin >> l >> m;
            p[l][m] = 1;
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++) 
            {
                if (p[i][j] == 1 && !visited[i][j]) 
                {
                    ans++;

                    queue<pair<int, int>> q;
                    q.push({ i, j });
                    visited[i][j] = true;

                    while (!q.empty()) 
                    {
                        pair<int, int> curr = q.front();
                        q.pop();

                        for (int dir = 0; dir < 4; dir++) 
                        {
                            int nx = curr.first + dx[dir];
                            int ny = curr.second + dy[dir];

                            if (nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
                            if (p[nx][ny] == 0 || visited[nx][ny]) continue;

                            visited[nx][ny] = true;
                            q.push({ nx, ny });
                        }
                    }
                }
            }
        }
        cout << ans << "\n";

    }
    return 0;
}
