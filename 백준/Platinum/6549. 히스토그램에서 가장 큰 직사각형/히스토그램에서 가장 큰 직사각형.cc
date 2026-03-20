#include <bits/stdc++.h>

using namespace std;

int main() {
    // 입출력 속도 향상
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true) {
        int n;
        cin >> n;
        if (n == 0) break;

        vector<long long> h(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> h[i];
        }

        stack<int> s;
        long long max_area = 0;

        for (int i = 0; i < n; i++) 
        {
            while (!s.empty() && h[s.top()] > h[i])
            {
                long long height = h[s.top()];
                s.pop();

                long long width = s.empty() ? i : (i - s.top() - 1);

                max_area = max(max_area, height * width);
            }
            s.push(i); 
        }

        while (!s.empty()) 
        {
            long long height = h[s.top()];
            s.pop();

            long long width = s.empty() ? n : (n - s.top() - 1);

            max_area = max(max_area, height * width);
        }

        cout << max_area << '\n';
    }

    return 0;
}