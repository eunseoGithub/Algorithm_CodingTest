#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    string c;
    cin >> c;

    stack<char> t;
    int total_pieces = 0; // 잘려진 조각의 총 개수

    for (int i = 0; i < c.length(); i++)
    {
        if (c[i] == '(')
        {
            // 쇠막대기의 시작이거나 레이저의 여는 괄호이므로 스택에 넣습니다.
            t.push(c[i]);
        }
        else // c[i] == ')'
        {
            // 닫는 괄호가 나왔으므로, 짝을 맞추기 위해 스택에서 하나를 뺍니다.
            t.pop();

            // 바로 앞 문자를 확인하여 레이저인지 쇠막대기의 끝인지 판별합니다.
            if (c[i - 1] == '(')
            {
                // 1. 레이저인 경우 '()'
                // 스택에 남아있는 개수(현재 겹쳐있는 쇠막대기 수)만큼 조각이 생깁니다.
                total_pieces += t.size();
            }
            else
            {
                // 2. 쇠막대기의 끝인 경우 '))'
                // 쇠막대기 하나가 끝났으므로, 남은 꼬리 부분 1조각만 더해줍니다.
                total_pieces += 1;
            }
        }
    }

    cout << total_pieces << "\n";
    return 0;
}