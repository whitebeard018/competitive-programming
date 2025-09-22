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
	int n, k;
	cin >> n >> k;

	if (k < 0 || n <= 0 || k>50 || n > 50) {
		cout << "Invalid input";
	}
	else {
		vector<int> v(n);

		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		for (int i = 0; i < n; i++) {
			if (v[i] < 0 || v[i] > 100) {
				cout << "Invalid input";
				return 0;
			}
		}
		
			int students = 0;

			for (int i = 0; i < n; i++) {
				if (v[i] >= v[k-1] && v[i]>0)
					students++;
			}

			cout << students;
	}
	}
