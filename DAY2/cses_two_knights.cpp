#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    if (!(cin >> n)) return 0;

    for (long long k = 1; k <= n; ++k) {
        long long total = (k*k) * (k*k - 1) / 2;   
        long long bad   = 4 * (k - 1) * (k - 2);   
        cout << (total - bad) << "\n";
    }
    return 0;
}
