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
	int t;
	cin >> t;

	while (t--) {
        unsigned long long n;
        cin >> n;

        vector<unsigned long long> ans;
        unsigned long long ten = 10;            
        for (int i = 1; i <= 18; ++i) {         
            unsigned long long d = 1 + ten;     
            if (n % d == 0) ans.push_back(n / d);
            if (ten > ULLONG_MAX / 10) break;   
            ten *= 10;                          
        }

        sort(ans.begin(), ans.end());
        cout << ans.size() << "\n";
        if (!ans.empty()) {
            for (auto x : ans) cout << x << ' ';
            cout << "\n";
        }
    }
    return 0;
}
		
	
	
