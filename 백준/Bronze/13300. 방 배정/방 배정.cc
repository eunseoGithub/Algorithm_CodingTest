#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<int, int> female;
    map<int, int> male;
    int N, K, S, Y;
    cin >> N >> K;
    for (int i = 0; i < N; i++)
    {
        cin >> S >> Y;
        if (S == 0)
        {
            if (female.find(Y) != female.end())
                female.insert({ Y,1 });
            female[Y]++;
        }
        else
        {
            if (male.find(Y) != male.end())
                male.insert({ Y,1 });
            male[Y]++;
        }
    }
    int count = 0;
    for (pair<int, int> p : female)
    {
        if (p.second % K == 0)
            count += p.second / K;
        else
            count += (p.second / K) + 1;
    }
    for (pair<int, int> p : male)
    {
        if (p.second % K == 0)
            count += p.second / K;
        else
            count += (p.second / K) + 1;
    }
    cout << count << endl;
    return 0;
}