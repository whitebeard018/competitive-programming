#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int best = 1, cur = 1;
    for (size_t i = 1; i < s.size(); ++i) {
        if (s[i] == s[i-1]) ++cur;
        else cur = 1;
        best = max(best, cur);
    }

    cout << best << "\n";
    return 0;
}
