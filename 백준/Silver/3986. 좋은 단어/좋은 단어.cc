#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    vector<string> l(n);

    for (int i = 0; i < n; i++)
    {
        cin >> l[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        stack<char> c;
        for (int j = 0; j < l[i].length(); j++)
        {
            if (c.empty())
                c.push(l[i][j]);
            else
            {
                if (c.top() == l[i][j])
                    c.pop();
                else
                    c.push(l[i][j]);
            }
        }
        if (c.empty())
            count++;
    }
    cout << count << endl;


    return 0;
}