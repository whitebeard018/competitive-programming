#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        vector<long long> parts;
        long long place = 1;

        while (n > 0) {
            long long digit = n % 10;
            if (digit != 0) {
                parts.push_back(digit * place);
            }
            n /= 10;
            place *= 10;
        }

        cout << parts.size() << endl;
        for (int i = parts.size() - 1; i >= 0; i--) {
            cout << parts[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
