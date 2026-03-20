#include <bits/stdc++.h>

using namespace std;

int main() {
    // 입출력 속도 향상
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    queue<int> q;
    while (n--)
    {
        string tmp;
        cin >> tmp;
        if (tmp == "push")
        {
            int tmpInt;
            cin >> tmpInt;
            q.push(tmpInt);
        }
        else if (tmp == "pop")
        {
            if (!q.empty())
            {
                cout << q.front() << endl;
                q.pop();
            }
            else
                cout << "-1" << endl;
        }
        else if (tmp == "empty")
        {
            cout << q.empty() << endl;
        }
        else if (tmp == "front")
        {
            if (!q.empty())
            {
                cout << q.front() << endl;
            }
            else
                cout << "-1" << endl;
        }
        else if (tmp == "back")
        {
            if (!q.empty())
            {
                cout << q.back() << endl;
            }
            else
                cout << "-1" << endl;
        }
        else if (tmp == "size")
        {
            cout << q.size() << endl;
        }
    }

    return 0;
}