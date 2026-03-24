#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    
    string line;

    while (true)
    {
        getline(cin, line);

        if (line == ".")
        {
            break;
        }

        stack<char> d;
        bool isValid = true;

        for (char c : line)
        {
            if (c == '(' || c == '[')
            {
                d.push(c);
            }
            else if (c == ')')
            {
                
                if (d.empty() || d.top() != '(') 
                {
                    isValid = false;
                    break;
                }
                d.pop();
            }
            else if (c == ']')
            {
                if (d.empty() || d.top() != '[') 
                {
                    isValid = false;
                    break;
                }
                d.pop();
            }
        }

        
        if (isValid && d.empty())
        {
            cout << "yes\n";
        }
        else 
        {
            cout << "no\n";
        }
    }

    return 0;
}