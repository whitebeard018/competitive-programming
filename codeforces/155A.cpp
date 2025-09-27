#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     vector<int> points , ne;
//     int cnt=0;
    
//     cin>>points[0];
//     ne.push_back(points[0]);
//     for(int i=1; i<n; i++){
//         cin>>points[i];
        
//         sort(ne.begin() , ne.end());
//         if(points[i]>ne.back()){
//             cnt++;
//         }
//         if(ne[0]>points[i] ){
//             cnt++;
//         }
//         ne.push_back(points[i]);
//     }
//     cout<<cnt;
//     return 0;
// }
// int main() {
//     int n;
//     cin >> n;
//     vector<int> points(n);
//     for (int i = 0; i < n; i++) cin >> points[i];

//     int cnt = 0;
//     int mn = points[0], mx = points[0];

//     for (int i = 1; i < n; i++) {
//         if (points[i] > mx) {
//             cnt++;
//             mx = points[i];  // update new maximum
//         } else if (points[i] < mn) {
//             cnt++;
//             mn = points[i];  // update new minimum
//         }
//     }

//     cout << cnt << endl;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    if (!(cin >> n)) return 0;
    vector<int> points(n);
    vector<int> ne;         // will hold previous scores only
    int cnt = 0;

    // read first score and initialize
    cin >> points[0];
    ne.push_back(points[0]);

    for (int i = 1; i < n; ++i) {
        cin >> points[i];

        // ne currently contains values from 0..i-1
        sort(ne.begin(), ne.end());   // keep it sorted (OK for constraints)

        // check strict max/min against previous values only
        if (!ne.empty()) {
            if (points[i] > ne.back()) cnt++;
            else if (points[i] < ne.front()) cnt++;
        }

        // insert for future iterations
        ne.push_back(points[i]);
    }

    cout << cnt << "\n";
    return 0;
}
