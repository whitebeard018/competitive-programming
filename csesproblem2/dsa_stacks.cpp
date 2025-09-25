#include <bits/stdc++.h>
using namespace std;

int main() {

    // stack<int> st;
    // st.push(1);
    // st.push(2);
    // st.push(3);
    // cout << st.top() << endl;
    // st.pop();
    // cout << st.top() << endl;
    // return 0;

    int n;
    cin>>n;
    stack<int> s;
    for(int i=1; i<=n ; i++){
        s.push(i);
       cout<<s.top()<<endl;
    }
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
   

}
