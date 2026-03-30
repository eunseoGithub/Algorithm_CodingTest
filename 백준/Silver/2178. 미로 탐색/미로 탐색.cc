#include <bits/stdc++.h>
using namespace std;

string board[102];
int dist[102][102];
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
        cin >> board[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        fill(dist[i], dist[i] + m, -1);

    }
    queue<pair<int, int>> q;
    q.push({ 0,0 });
    dist[0][0] = 0;
    while (!q.empty())
    {
        pair<int, int> currentNode = q.front();
        q.pop();
        for (int dir = 0; dir < 4; dir++)
        {
            int newDirX = currentNode.first + dx[dir];
            int newDirY = currentNode.second + dy[dir];
            if (newDirX < 0 || newDirX >= n) continue;
            if (newDirY < 0 || newDirY >= m) continue;
            if (dist[newDirX][newDirY] >= 0 || board[newDirX][newDirY] != '1') continue;
            dist[newDirX][newDirY] = dist[currentNode.first][currentNode.second] + 1;
            q.push({ newDirX,newDirY });
        }
    }

    cout << dist[n - 1][m - 1] + 1;

    return 0;
}