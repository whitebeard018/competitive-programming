#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string,int> mp;

    // insert/update
    mp["apple"] = 3;
    mp["banana"] = 5;
    mp["orange"] = 2;

    // iterate (sorted by key)
    cout << "Map contents:\n";
    for (auto &p : mp) cout << p.first << " -> " << p.second << "\n";

    // find
    string key = "banana";
    auto it = mp.find(key);
    if (it != mp.end()) 
        cout << key << " exists with " << it->second << "\n";
    else 
        cout << key << " not found\n";

    // erase example
    mp.erase("apple");
    cout << "After erase, size = " << mp.size() << "\n";
    return 0;
}

