#include <bits/stdc++.h>

using namespace std;

void solve() {
    string p, s;
    int n;
    cin >> p >> n >> s;

    deque<int> dq;
    string temp = "";

    for (int i = 0; i < s.length(); i++) 
    {
        if (isdigit(s[i]))
            temp += s[i];
        else 
        {
            if (!temp.empty()) 
            {
                dq.push_back(stoi(temp));
                temp = "";
            }
        }
    }

    bool isReverse = false;
    bool isError = false;

    for (char cmd : p) 
    {
        if (cmd == 'R') 
        {
            isReverse = !isReverse; 
        }
        else 
        {
            if (dq.empty()) 
            {
                isError = true;
                break;
            }
            if (isReverse) 
                dq.pop_back();
            else 
                dq.pop_front();          
        }
    }

    if (isError) 
    {
        cout << "error\n";
    }
    else 
    {
        cout << "[";
        if (isReverse) reverse(dq.begin(), dq.end()); 
        for (int i = 0; i < dq.size(); i++) 
        {
            cout << dq[i] << (i == dq.size() - 1 ? "" : ",");
        }
        cout << "]\n";
    }
}

int main() 
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) 
        solve();

    return 0;
}