#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B, C;
    cin >> A;
    cin >> B;
    cin >> C;

    long long D = A * B * C;
    int num[10] = {};
    long long tmp = D;
    while (tmp > 0)
    {
        long long e;
        e = tmp % 10;
        tmp /= 10;
        num[e]++;
    }
    for (int a : num)
        cout << a << "\n";
    return 0;
}