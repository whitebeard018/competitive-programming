// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <map>
// #include <set>
// #include <sstream>
// #include <string>
// using namespace std;

// int main() {
//     // int n;
//     // cin >> n;  // number of elements

//     // vector<int> data(n);
//     // for (int i = 0; i < n; i++) {
//     //     cin >> data[i];
//     // }

//     //  sort(data.begin(), data.end());
//     // data.erase(unique(data.begin(), data.end()), data.end());


//     // for (int x : data) {
//     //     cout << x << " ";
//     // }
//     // cout << "\n";

//     string line;
//     getline(cin, line);

//     map<string, int> freq;
//     string word;
//     stringstream ss(line);
//     while ( ss>> word){
//         freq[word]++;
//     }
//     for(auto &p : freq){
//         cout<<p.first<<" "<<p.second<<endl;

//     }

// }
#include <iostream>
#include <map>
#include <sstream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string line;
    getline(cin, line);  // read full sentence

    map<string, int> freq;
    string word;
    stringstream ss(line);

    while (ss >> word) {
        freq[word]++;
    }

    for (auto &p : freq) {
        cout << p.first << " " << p.second << "\n";
    }
}
