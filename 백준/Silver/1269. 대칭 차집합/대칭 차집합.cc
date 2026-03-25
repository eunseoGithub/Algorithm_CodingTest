#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    
    int a, b;
    cin >> a >> b;

    vector<int> A(a);
    vector<int> B(b);

    for (int i = 0; i < a; i++)
        cin >> A[i];
    for (int i = 0; i < b; i++)
        cin >> B[i];

    //set_symmetric_difference를 사용하기 위해선 정렬이 필요
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    vector<int> result;

    //대칭 차집합을 구하는 함수
    set_symmetric_difference(
        A.begin(), A.end(),
        B.begin(), B.end(),
        back_inserter(result)//결과값을 result에 push_back
    );

    cout << result.size() << endl;

    return 0;
}