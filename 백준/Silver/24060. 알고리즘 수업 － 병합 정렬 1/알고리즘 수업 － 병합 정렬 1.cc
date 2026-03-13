#include <iostream>
#include <vector>
using namespace std;

int N, K;
int cnt = 0;
int answer = -1;

void Merge(vector<int>& A, int p, int q, int r)
{
    vector<int> tmp(r - p + 1);

    int i = p;
    int j = q + 1;
    int t = 0;

    while (i <= q && j <= r)
    {
        if (A[i] <= A[j])
            tmp[t++] = A[i++];
        else
            tmp[t++] = A[j++];
    }

    while (i <= q)
        tmp[t++] = A[i++];

    while (j <= r)
        tmp[t++] = A[j++];

    for (int x = p, y = 0; x <= r; x++, y++)
    {
        A[x] = tmp[y];
        cnt++;

        if (cnt == K)
            answer = A[x];
    }
}

void MergeSort(vector<int>& A, int p, int r)
{
    if (p < r)
    {
        int q = (p + r) / 2;
        MergeSort(A, p, q);
        MergeSort(A, q + 1, r);
        Merge(A, p, q, r);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> K;

    vector<int> A(N);
    for (int i = 0; i < N; i++)
        cin >> A[i];

    MergeSort(A, 0, N - 1);

    cout << answer << '\n';
    return 0;
}