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
	int n;
	cin >> n;
	int solved_problem = 0;
	for (int i = 0; i < n; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a + b + c >= 2) {
			solved_problem++;
		}
	}
	cout << solved_problem << endl;
}