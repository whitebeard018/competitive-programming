//#include <bits/stdc++.h>
// ===== UNIVERSAL HEADER =====
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
#include <queue>
#include <stack>
#include <deque>
#include <bitset>
#include <iomanip>   // for setprecision
#include <sstream>   // for stringstream

using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define endl "\n" // Faster output
using namespace std;

#define all(x) (x).begin(), (x).end()
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
    int n, m;
    cin >> n;
    string a, b, c;
    cin >> a;

    cin >> m;

    cin >> b;

    cin >> c;


    for (int i = 0; i < m; i++) {
        if (c[i] == 'V')
            a = b[i] + a;
        else
            a = a + b[i];
    }
    cout << a << endl;
}
    return 0;
}
