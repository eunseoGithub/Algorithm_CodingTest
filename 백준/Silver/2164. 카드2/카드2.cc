#include <bits/stdc++.h>

using namespace std;

int main() {
    // 입출력 속도 향상
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long n;
    cin >> n;
    queue<int> q;
    
    for (int i = 1; i <= n; i++)
    {
        q.push(i);
    }

    while (q.size() != 1)
    {
        q.pop();
        int tmp = q.front();
        q.pop();
        q.push(tmp);
    }

    cout << q.front() << endl;

    return 0;
}