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
	cin >> n;
	set<int> levels;

	int p;
	cin >> p;
	for (int i = 0; i < p; i++){
		int y;
	cin >> y;
	levels.insert(y);
}
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		int y;
		cin >> y;
		levels.insert(y);
	} 

	if ((int)levels.size() == n)cout << "I become the guy." << endl;
	else
		cout << "Oh, my keyboard!" << endl;
}