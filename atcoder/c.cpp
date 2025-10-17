#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;
    vector<array<long long,3>> val(n);
    for (int i = 0; i < n; ++i) cin >> val[i][0] >> val[i][1] >> val[i][2];

    vector<array<long long,3>> dp(n);
    dp[0][0] = val[0][0];
    dp[0][1] = val[0][1];
    dp[0][2] = val[0][2];

    for (int i = 1; i < n; ++i) {
        dp[i][0] = val[i][0] + max(dp[i-1][1], dp[i-1][2]);
        dp[i][1] = val[i][1] + max(dp[i-1][0], dp[i-1][2]);
        dp[i][2] = val[i][2] + max(dp[i-1][0], dp[i-1][1]);
    }

    long long ans = max({dp[n-1][0], dp[n-1][1], dp[n-1][2]});
    cout << ans << '\n';
    return 0;
}
