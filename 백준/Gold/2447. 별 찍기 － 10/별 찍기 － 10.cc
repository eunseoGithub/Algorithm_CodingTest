#include <iostream>
#include <vector>

using namespace std;

bool IsBlank(int r, int c)
{
    while (r > 0 || c > 0)
    {
        if (r % 3 == 1 && c % 3 == 1)
        {
            return true;
        }

        r /= 3;
        c /= 3;
    }

    return false;
}

int main()
{
    int N;
    cin >> N;

    for (int r = 0; r < N; r++)
    {
        for (int c = 0; c < N; c++)
        {
            if (IsBlank(r, c))
            {
                cout << ' ';
            }
            else
            {
                cout << '*';
            }
        }
        cout << '\n';
    }

    return 0;
}