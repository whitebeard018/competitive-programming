#include<iostream>
using namespace std;
const int MOD = 1e9+7;

long long modpow(long long a, long long b, long long m) {
    long long res = 1;
    while (b > 0) {
        if (b & 1) res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}

int main() {
    long long n;
    cin >> n;
    cout << modpow(2, n, MOD) << "\n";
    return 0;
}
