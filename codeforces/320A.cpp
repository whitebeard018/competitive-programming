#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    bool ok = true;
    for (int i = 0; i < (int)s.size();) {
        if (s[i] == '1') {
            if (i + 2 < (int)s.size() && s[i+1] == '4' && s[i+2] == '4') {
                i += 3; // consume "144"
            }
            else if (i + 1 < (int)s.size() && s[i+1] == '4') {
                i += 2; // consume "14"
            }
            else {
                i += 1; // consume "1"
            }
        }
        else {
            ok = false;
            break;
        }
    }

    cout << (ok ? "YES\n" : "NO\n");
    return 0;
}