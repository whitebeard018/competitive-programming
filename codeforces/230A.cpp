#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    long long s, n;
    cin>>s>>n;
    vector<long long> x(n), y(n);

    for(int i=0; i<n; i++){
        cin>>x[i]>>y[i];
    }
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    bool b1=true;
    for(int i=0; i<n; i++){
        if(s-x[i]<=0) {
            b1=false;
            break;
       }
       s+=y[i];
    }
    if(b1) cout<<"YES";
    else cout<<"NO";

}