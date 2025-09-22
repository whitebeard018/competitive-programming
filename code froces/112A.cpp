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

// ==============================
int main() {
    string a, b;
    cin >> a >> b;           

    int n = (int)a.size();
    int ans = 0;              
    for (int i = 0; i < n; ++i) {
        char ca = (char)tolower((unsigned char)a[i]);
        char cb = (char)tolower((unsigned char)b[i]);
        if (ca < cb) { ans = -1; break; }
        if (ca > cb) { ans = 1;  break; }
    }
    cout << ans << '\n';
    return 0;

}