#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() 
{
    int a = 0;
    int b = 1;
    int n;
    cin >> n;
    if (n < 2)
    {
        cout << n << "\n";
        return 0;
    }

    for (int i = 1; i < n; i++)
    {
        int tmp = a + b;
        a = b;
        b = tmp;
    }
    cout << b << "\n";
}