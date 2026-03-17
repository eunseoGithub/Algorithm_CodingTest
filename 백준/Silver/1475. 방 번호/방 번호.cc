#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string N;
    vector<int> num(10,0);

    cin >> N;
    
    for (char c : N)
    {
        num[c - '0']++;
    }
    int addS = num[6] + num[9];
    
    int max = 0;
    if (addS % 2 != 0)
    {
        num[6] = addS / 2 + 1;
        num[9] = addS / 2 + 1;
    }
    else
    {
        num[6] = addS / 2;
        num[9] = addS / 2;
    }
    
    sort(num.begin(), num.end(),[&](int a, int b)
    {
            return a > b;
    });
    cout << num[0] << endl;
    /*if (max < num[0])
        cout << num[0] << endl;
    else
        cout << max << endl;*/
    return 0;
}