#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num = 0;
    cin >> num;
    vector<string> answer;
    for (int i = 0; i < num; ++i)
    {
        string s,strfry;
        cin >> s >> strfry;

        sort(s.begin(), s.end());
        sort(strfry.begin(), strfry.end());
        if (s == strfry)
            answer.push_back("Possible");
        else
            answer.push_back("Impossible");
    }
    for (string a : answer)
        cout << a << endl;
    return 0;
}