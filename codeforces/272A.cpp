#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int x; 
        cin >> x;
        sum += x;
    }

    int ans = 0;
    for (int d = 1; d <= 5; d++) {
        int total = sum + d;
        // Who will be chosen? 
        // Person index = total % (n+1). If 0 → Dima.
        if (total % (n + 1) != 1) {
            ans++;
        }
    }

    cout << ans << "\n";
    return 0;
}
