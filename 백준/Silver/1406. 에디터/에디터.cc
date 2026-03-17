#include <iostream>
#include <string>
#include <list>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    list<char> editor(s.begin(), s.end());
    auto cursor = editor.end();

    int m;
    cin >> m;

    while (m--)
    {
        char cmd;
        cin >> cmd;

        if (cmd == 'L')
        {
            if (cursor != editor.begin()) --cursor;
        }
        else if (cmd == 'D')
        {
            if (cursor != editor.end()) ++cursor;
        }
        else if (cmd == 'B')
        {
            if (cursor != editor.begin())
            {
                cursor = editor.erase(prev(cursor));
            }
        }
        else if (cmd == 'P')
        {
            char x;
            cin >> x;
            editor.insert(cursor,x);
        }
    }
    for (char c : editor)
        cout << c;

    return 0;
}