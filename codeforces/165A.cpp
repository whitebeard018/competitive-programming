#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;
    vector<pair<int,int>> pts(n);
    for (int i = 0; i < n; ++i) cin >> pts[i].first >> pts[i].second;

    int ans = 0;
    for (int i = 0; i < n; ++i) {
        bool left = false, right = false, up = false, down = false;
        for (int j = 0; j < n; ++j) {
            if (i == j) continue;
            if (pts[j].second == pts[i].second) {
                if (pts[j].first < pts[i].first) left = true;
                if (pts[j].first > pts[i].first) right = true;
            }
            if (pts[j].first == pts[i].first) {
                if (pts[j].second < pts[i].second) down = true;
                if (pts[j].second > pts[i].second) up = true;
            }
        }
        if (left && right && up && down) ++ans;
    }

    cout << ans << '\n';
    return 0;
}
