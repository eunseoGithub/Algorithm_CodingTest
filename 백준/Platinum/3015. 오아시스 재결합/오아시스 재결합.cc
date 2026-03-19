#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    stack<pair<int, long long>> st;

    long long ans = 0;
    for (int i = 0; i < n; ++i) 
    {
        int h;
        cin >> h;

        long long cnt = 1;

        while (!st.empty() && st.top().first <= h) 
        {
            ans += st.top().second;

            if (st.top().first == h) 
            {
                cnt += st.top().second;
            }

            st.pop();
        }

        if (!st.empty()) 
        {
            ans++;
        }

        st.push({ h, cnt });
    }

    cout << ans << "\n";

    return 0;
}