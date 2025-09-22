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



int main() {
    int n;
    string s;
    cin >> n >> s;

    set<char> letters;
    for (char c : s) {
        letters.insert(tolower((unsigned char)c));
    }

    if ((int)letters.size() == 26)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
