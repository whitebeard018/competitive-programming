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
	
	string s;
	cin >> s;
	int count=0;
	for (int i = 1; i < n; i++) {
		if (s[i] == 'R') {
			if (s[i - 1] == 'R')
				count++;
			
		}
		if (s[i] == 'G') {
			if (s[i - 1] == 'G')
				count++;
			
		}if (s[i] == 'B') {
			if (s[i - 1] == 'B')
				count++;
			
		}


	}
	cout << count;

}