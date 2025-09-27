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

// int main() {
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
    
//     int n;
//     cin>>n;
//     vector<int> st , sr;
//     for(int i=0 ; i<n ; i++){
//         int x;
//         cin>>x;
//         st.push_back(x);
//     }
//     int x = st.back();
//     for(int i=0 ; i<st.size()-1 ; i++){
//         if((st[st.size()-1-i] <x)){
//         sr.push_back(st[st.size()-1-i]);
//         } 
//         else {
//             sr.push_back(-1);
//             x=st[st.size()-1-i];
//         }
//     }
//     for(int c: sr) cout<<c<<" ";
//     return 0;
// }
// bool is_open(char c){
//     return c=='(' || c=='{' || c=='[' || c=='<';
// }
// bool is_closed(char c){
//     return c==')' || c=='}' || c==']' || c=='>';
// }
// char matching(char c){
//     if(c=='(') return ')';
//     if(c=='{') return '}';
//     if(c=='[') return ']';
//     if(c=='<') return '>';
//     return 0;
// }

// int main(){
//     string s;
//     cin>>s;
//     stack<char> st;
//     for(char c: s){
//         if(c == is_open(c)){
//             st.push(c);
//         }
//         if(c== is_closed(c)){
//             if(st.empty() || matching(st.top())!=c){
//                 cout<<"NO"<<endl;
//                 return 0;
//             }
//             st.pop();
//         }
//     }
//     if(st.empty()) cout<<"YES"<<endl;
//     else cout<<"NO"<<endl;
// }
// int main(){
//     string s;
//      cin>>s;
//      queue<char> q;
//      vector<char> freq(26,0);
//      for(char c: s){
//         freq[c-'a']++;
//         q.push(c);

//         if(!s.empty() && freq[q.front() - 'a']>1){
//             q.pop();
//         }
//         if(q.empty()) cout<<-1<<" ";
//         else cout<<q.front()<<" ";
//      }
// }
//int main(){
//    int n, k ;
//    cin>> n >> k ;
//    vector <int> a(n);
//    for(int i=0 ; i<n ; i++) cin>> a[i];
//    priority_queue<int> pq;
//    for(int x: a) pq.push(x);
//    
//    for(int i=0 ; i<k &&!pq.empty(); i++){
//    cout<<pq.top()<<" ";
//    pq.pop();
//    } 
//    cout<<"\n";
//    return 0;
//}
int main() {
   /* long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
		vector<long long> a(n);
        for (long long i = 0; i < n; i++)
            cin >> a[i];
        int m;
        cin >> m;
        veector<string> b(m);

    }*/
    vector<int> st = { 1,2,3,4,6,7,8,9 };
    st.push_back(st.begin() + 4)=5;
    for (int c : st) cout << st;

}