#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string c;
        cin >> c;
        stack<char> m;
        for (char l : c)
        {
            if (m.empty())
            {
                m.push(l);
            }
            else
            {
                if (m.top() == l)
                {
                    m.push(l);
                }
                else
                {
                    if(m.top() == '(')
                        m.pop();
                }
            }
        }
        if (m.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}