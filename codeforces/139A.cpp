#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;
    vector<int> a(7);
    for (int i = 0; i < 7; ++i) cin >> a[i];

    int day = 0; 
    while (n > 0) {
        n -= a[day % 7];
        day++;
    }

    int answer = ((day - 1) % 7) + 1; 
    cout << answer << "\n";
    return 0;
}
