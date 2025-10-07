#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    if (!(cin >> n)) return 0;
    vector<long long> a(n);
    for (long long i = 0; i < n; ++i) cin >> a[i];
    sort(a.begin(), a.end());

    long long q;
    cin >> q;
    while (q--) {
        long long x;
        cin >> x;
        // upper_bound returns iterator to first element > x
        long long cnt = upper_bound(a.begin(), a.end(), x) - a.begin();
        cout << cnt << '\n';
    }
    return 0;
}
