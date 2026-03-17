#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int N;
    vector<int> M;
    cin >> N;
    for (int i = 0; i < N; ++i)
    {
        int tmp;
        cin >> tmp;
        M.push_back(tmp);
    }
    int v;
    cin >> v;
    int count = 0;
    for (int i : M)
    {
        if (i == v)
            count++;
    }
    cout << count << endl;
    return 0;
}