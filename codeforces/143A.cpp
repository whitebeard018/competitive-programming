#include <iostream>
using namespace std;

int main() {
    int r1, r2, c1, c2, d1, d2;
    if (!(cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2)) return 0;

    int numA = c1 + d1 - r2;
    if (numA % 2 != 0) {
        cout << -1;
        return 0;
    }
    int a = numA / 2;
    int b = r1 - a;
    int c = c1 - a;
    int d = d1 - a;
    bool positive = (a > 0 && b > 0 && c > 0 && d > 0);
    bool distinct = (a!=b && a!=c && a!=d && b!=c && b!=d && c!=d);

    if (positive && distinct) {
        cout << a << " " << b << '\n';
        cout << c << " " << d << '\n';
    } else {
        cout << -1;
    }
    return 0;
}
