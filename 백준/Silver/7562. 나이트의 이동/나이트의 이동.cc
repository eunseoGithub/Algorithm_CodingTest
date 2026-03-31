#include <bits/stdc++.h>
using namespace std;

int dx[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };
int dy[8] = { 2, 1, -1, -2, -2, -1, 1 ,2 };

int main() 
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int l;
        cin >> l;
        pair<int, int> start;
        pair<int, int> arr;

        cin >> start.first >> start.second;
        cin >> arr.first >> arr.second;
        if (start == arr)
        {
            cout << 0 << endl;
            continue;
        }

        int dist[301][301];
        for (int i = 0; i < l; i++) 
        {
            for (int j = 0; j < l; j++)
                dist[i][j] = -1;
        }
        queue<pair<int, int>> q;
        q.push(start);
        dist[start.first][start.second] = 0;
        bool found = false;
        while (!q.empty())
        {
            pair<int, int> curr = q.front();
            q.pop();
            
            for (int i = 0; i < 8; i++)
            {
                int nx = curr.first + dx[i];
                int ny = curr.second + dy[i];

                if (nx < 0 || ny < 0 || nx >= l || ny >= l) continue;
                
                if (dist[nx][ny] == -1)
                {
                    dist[nx][ny] = dist[curr.first][curr.second] + 1;

                    if (nx == arr.first && ny == arr.second)
                    {
                        cout << dist[nx][ny] << endl;
                        found = true;
                        break;
                    }
                    q.push({ nx,ny });
                }
            }
            if (found) break;
        }
    }

    

    return 0;
}
