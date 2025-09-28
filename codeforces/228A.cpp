#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d;
    if (!(cin >> a >> b >> c >> d)) return 0;
    unordered_set<int> s = {a, b, c, d};
    cout << 4 - (int)s.size() << "\n";
    return 0;
}
