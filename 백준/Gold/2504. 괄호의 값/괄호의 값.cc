#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    string c;
    cin >> c;

    stack<char> s;
    int ans = 0;
    int temp = 1;

    for (int i = 0; i < c.length(); i++)
    {
        if (c[i] == '(')
        {
            temp *= 2;
            s.push(c[i]);
        }
        else if (c[i] == '[')
        {
            temp *= 3; 
            s.push(c[i]);
        }
        else if (c[i] == ')')
        {
            if (s.empty() || s.top() != '(')
            {
                ans = 0;
                break;
            }

            if (c[i - 1] == '(')
            {
                ans += temp;
            }

            s.pop();
            temp /= 2;
        }
        else if (c[i] == ']')
        {
            
            if (s.empty() || s.top() != '[')
            {
                ans = 0;
                break;
            }

            
            if (c[i - 1] == '[')
            {
                ans += temp;
            }

            
            s.pop();
            temp /= 3;
        }
    }

    if (!s.empty())
    {
        ans = 0;
    }

    cout << ans << "\n";
}