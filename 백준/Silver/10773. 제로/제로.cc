#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int K;
    cin >> K;
    stack<int> N;

    while (K--)
    {
        int tmp;
        cin >> tmp;
        
        if (tmp != 0)
            N.push(tmp);

        else
            N.pop();
    }
    int answer = 0;
    int size = N.size();
    for (int i = 0; i < size; i++)
    {
        answer += N.top();
        N.pop();
    }
    cout << answer << endl;
    return 0;
}