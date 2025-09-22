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
	int I, J;
	int a[5][5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
		{
			cin >> a[i][j];
		}
		cout << endl;
	}
	for(int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (a[i][j] == 1) {
				 I = i;
				 J = j;
			}
		}
	}
	
	
	int moves = abs(2 - I) + abs(2-J) ;
	cout << moves;

}