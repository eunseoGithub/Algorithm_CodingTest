#include <bits/stdc++.h>
using namespace std;

const int MAX = 100001;
int visited[MAX];

int bfs(int n, int k)
{
    queue<int> q;
    q.push(n);
    visited[n] = 1;

    while (!q.empty())
    {
        int x = q.front();
        q.pop();

        if (x == k)
        {
            return visited[x] - 1;
        }

        int next_positions[3] = { x - 1, x + 1, x * 2 };

        for (int next : next_positions)
        {
            if (next >= 0 && next < MAX && visited[next] == 0)
            {
                visited[next] = visited[x] + 1;
                q.push(next);
            }
        }

    }
    return 0;
}


int main() 
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    int n, k;

    //걷기 : x-1, x+1
    //순이 : 2*x

    cin >> n >> k;

    if (n >= k)
    {
        cout << n - k << endl;
    }
    else
    {
        cout << bfs(n, k) << endl;
    }

    return 0;
}
