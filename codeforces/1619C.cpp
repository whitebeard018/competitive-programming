#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string a, s;
        cin >> a >> s;
        int n = (int)a.size();
        vector<int> v(n, 0);
        int i = n - 1;
        int j = (int)s.size() - 1;
        bool ok = true;

        // process digits of a from right to left
        while (i >= 0) {                    // <-- important: loop while we still have digits in a
            bool matched = false;           // reset per-digit match flag
            for (int k = 0; k <= 9; ++k) {
                // single-digit match (use bounds check on j)
                if (j >= 0 && (s[j] - '0') == k + (a[i] - '0')) {
                    v[i] = k;
                    j--;
                    i--;
                    matched = true;
                    break;
                }
                // two-digit match: ensure j-1 exists before accessing
                if (j - 1 >= 0) {
                    int two = 10 * (s[j-1] - '0') + (s[j] - '0');
                    if (two == k + (a[i] - '0')) {
                        v[i] = k;
                        j -= 2;
                        i--;
                        matched = true;
                        break;
                    }
                }
            }
            if (!matched) { ok = false; break; } // can't form digit -> impossible
        }

        if (!ok) {
            cout << -1 << '\n';
            continue;
        }

        // Build final result: remaining s[0..j] digits (if any) are higher-order digits
        vector<int> res;
        for (int idx = 0; idx <= j; ++idx) res.push_back(s[idx] - '0');
        // then the digits we built for a (v[0..n-1])
        for (int idx = 0; idx < n; ++idx) res.push_back(v[idx]);

        // print skipping leading zeros (but keep a single zero if result is zero)
        int pos = 0;
        while (pos + 1 < (int)res.size() && res[pos] == 0) pos++;
        for (int idx = pos; idx < (int)res.size(); ++idx) cout << res[idx];
        cout << '\n';
    }
    return 0;
}
