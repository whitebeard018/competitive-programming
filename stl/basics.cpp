#include<iostream>
#include <vector>
#include<set>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <map>
#include<string>
#include<stack>
#include<queue>
using namespace std;

int main() {
// using namespace std;
// int main(){
// int n;
// cin>>n;
// cout<<endl;
// vector <int> arr(n);
// for(int c=0 ; c<n ; c++) cin>>arr[c];
// sort(arr.begin() , arr.end());
// arr.erase(unique(arr.begin() , arr.end()), arr.end());
// for(int c; c<n ; c++) cout<<arr[c]<<" ";
// return 0;
// }

// using namespace std;

// int main() {
//        int n;
//     cin >> n;  // number of elements

//     vector<int> data(n);
//     for (int i = 0; i < n; i++) {
//         cin >> data[i];
//     }

//      sort(data.begin(), data.end());
//     data.erase(unique(data.begin(), data.end()), data.end());


//     for (int x : data) {
//         cout << x << " ";
//     }
//     cout << "\n";
// }
//#include <iostream>
//#include <sstream>
//#include <map>
//using namespace std;
//
//int main() {
//    string line;
//    getline(cin, line);  // read the entire line once
//
//    map<string, int> freq;
//    string word;
//    stringstream ss(line);
//
//    while (ss >> word) {
//        freq[word]++;
//    }
//
//    for (auto &p : freq) {
//        cout << p.first << " " << p.second << "\n";
//    }
//}

    // cout << "Enter a sentence:\n" << flush;   

    // string line;
    // getline(cin, line);

    // map<string, int> freq;
    // string word;
    // stringstream ss(line);

    // while (ss >> word) {
    //     freq[word]++;
    // }

    // cout << "\nWord frequencies:\n" << flush;  
    // for (auto &p : freq) {
    //     cout << p.first << " -> " << p.second << "\n" << flush;
    // }
    // int n;
    // cin>>n;

    // set <int> s;
    // for(int i=0 ; i<n ; i++){
    //     int x;
    //     cin>>x;
    //     s.insert(x);
    // }
    // cout<<s.size()<<endl;
    // int x; cin>>x;
    // multiset<int> ms;
    // for(int i=0 ; i<n ; i++){
    //     int x;
    //     cin>>x;
    //     ms.insert(x);
    // }
    // for (auto x : ms) cout<<x<<" ";

    // auto it = ms.find(x);
    // if(it!=ms.end()){
    //     ms.erase(it);
    // }
    
    int n;
    cin>>n;
    vector<int> st , sr;
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        st.push_back(x);
    }
    int x = st.back();
    for(int i=0 ; i<st.size()-1 ; i++){
        if((st[st.size()-1-i] <x)){
        sr.push_back(st[st.size()-1-i]);
        } 
        else {
            sr.push_back(-1);
            x=st[st.size()-1-i];
        }
    }
    for(int c: sr) cout<<c<<" ";
    return 0;
}
