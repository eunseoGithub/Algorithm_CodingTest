#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;

    deque<int> dq;
    for (int i = 1; i <= n; ++i) 
    {
        dq.push_back(i);
    }

    int total_moves = 0;

    while (m--) {
        int target;
        cin >> target;

        int idx = 0;
        for (int i = 0; i < dq.size(); ++i) 
        {
            if (dq[i] == target) 
            {
                idx = i;
                break;
            }
        }

        int left_dist = idx;
        int right_dist = dq.size() - idx;

        if (left_dist <= right_dist)
        {
            for (int i = 0; i < left_dist; ++i) 
            {
                dq.push_back(dq.front());
                dq.pop_front();
                total_moves++;
            }
        }
        else 
        {
            for (int i = 0; i < right_dist; ++i) 
            {
                dq.push_front(dq.back());
                dq.pop_back();
                total_moves++;
            }
        }

        dq.pop_front();
    }

    cout << total_moves << endl;

    return 0;
}