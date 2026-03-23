#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    

    deque<int> d;
    for (int i = 0; i < n; i++)
    {
        string tmp;
        cin >> tmp;
        if (tmp == "push_front")
        {
            int t;
            cin >> t;
            d.push_front(t);
        }
        else if (tmp == "push_back")
        {
            int t;
            cin >> t;
            d.push_back(t);
        }
        else if (tmp == "pop_front")
        {
            if (d.empty())
                cout << "-1" << endl;
            else
            {
                cout << d.front() << endl;
                d.pop_front();
            }
        }
        else if (tmp == "pop_back")
        {
            if (d.empty())
                cout << "-1" << endl;
            else
            {
                cout << d.back() << endl;
                d.pop_back();
            }
        }
        else if (tmp == "size")
        {
            cout << d.size() << endl;
        }
        else if (tmp == "empty")
        {
            cout << (d.empty() ? "1" : "0") << endl;
        }
        else if (tmp == "front")
        {
            if (d.empty())
                cout << "-1" << endl;
            else
            {
                cout << d.front() << endl;
            }
        }
        else if (tmp == "back")
        {
            if (d.empty())
                cout << "-1" << endl;
            else
            {
                cout << d.back() << endl;
            }
        }
    }

    return 0;
}