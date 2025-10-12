#include<iostream>
#include<vector>
#include<set>
using namespace std;
#include<algorithm>
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int> a;
        for(int i=0; i<n; i++) {
            int x; cin>>x;
            a.insert(x);
    }
    int idx = 0;
    bool b1=true;
    for (auto it = a.begin(); it != a.end(); ++it, ++idx) {
        if (*it != idx) {
            cout<<idx<<endl;
            b1=false;
            break;
        }
    }
    if(b1) cout<<idx<<endl;
}
}