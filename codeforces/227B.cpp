// #include<iostream>
// #include <vector>
// using namespace std;
// int main(){
//     long long n;
//     cin>>n;
//     vector <long long> a(n);
//    for(long long i=0 ; i<n ; i++){
//     cin>>a[i];
//    }
//    long long m;
//    cin>>m;

//    vector<long long> b(m);
   
//    for(long long i=0 ;i<m ; i++){
//     cin>>b[i];
//    }
//    long long cntv=0 , cntp=0;
//    for(long long i=0 ; i<m ; i++){
//     for (int j=0 ; j<n ; j++){
//     if (b[i]==a[j])
//     {cntv+=j+1;
//         break;
//     }
// }
//    }
//    for(long long i=0 ; i<m ; i++){
//     for (int j=n-1 ; j>=0 ; j--){
//     if (b[i]==a[j])
//     {cntp+=n-j ;
//         break;
    
// }
//    }
// }
//    cout<<cntv<<" "<<cntp;

// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    if (!(cin >> n)) return 0;
    vector<long long> a(n);
    for (long long i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long m;
    cin >> m;
    vector<long long> b(m);
    for (long long i = 0; i < m; ++i) cin >> b[i];

    // Build map value -> 1-based position in a
    unordered_map<long long, long long> pos;
    pos.reserve((size_t)max(1LL, n));
    for (long long i = 0; i < n; ++i) pos[a[i]] = i + 1;

    long long cntv = 0, cntp = 0;
    for (long long i = 0; i < m; ++i) {
        auto it = pos.find(b[i]);
        if (it == pos.end()) {
            // input guarantees b[i] exists in a, but handle gracefully if not
            cerr << "ERROR: query value " << b[i] << " not found in array a\n";
            return 0;
        }
        long long p = it->second;         // 1-based
        cntv += p;                         // comparisons from front
        cntp += (n - p + 1);               // comparisons from back
    }

    cout << cntv << " " << cntp << '\n';
    return 0;
}

