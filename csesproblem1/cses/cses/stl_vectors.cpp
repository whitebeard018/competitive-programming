#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3};

    // Add elements
    v.push_back(4);
    v.push_back(5);

    // Access elements
    cout << "Vector elements: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // Size and last element
    cout << "Size: " << v.size() << endl;
    cout << "Last element: " << v.back() << endl;

    // Remove last element
    v.pop_back();

    cout << "After pop_back: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    return 0;
}
