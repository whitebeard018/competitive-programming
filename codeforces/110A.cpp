#include<iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;
    int cnt = 0;
    while (n > 0) {
        int d = n % 10;
        if (d == 4 || d == 7) cnt++;
        n /= 10;
    }
    if (cnt == 4 || cnt == 7) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
