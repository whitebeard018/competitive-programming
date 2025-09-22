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
	int y;
	cin >> t;
	int coins = 0;
	while (t--) {
		int n;
		
		int x1;
		cin >> n;
		
		for (int temp=n; n >= 0; ) {
			for (int i = x1; temp / 3 > 0; i++)
			{
				temp = temp / 3;

			}
			n = n - pow(3, x1);

			coins += pow(3, x1 + 1) + x1 * pow(3, x1 - 1);
		}
		
	}
	cout << coins;
}