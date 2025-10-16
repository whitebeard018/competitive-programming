#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n, q;
        cin>>n>>q;
        vector<long long> a(n), a1(n);
        cin>>a[0];
        a1[0]=a[0];
        for(int i=1; i<n; i++){
            cin>>a[i];
            a1[i]=a1[i-1]+a[i];
            a[i]= max(a[i-1], a[i]);
            
        }
        vector<long long> k(q);
        for(int i=0; i<q; i++){
            cin>>k[i];
        }
        for(int i=0; i<q; i++){
           auto it=upper_bound(a.begin(), a.end(), k[i]);
           int idx= int(it-a.begin())-1;
           if(it==a.end()) {cout<<a1[n-1]<<" ";
            continue;}
           if(idx<0) cout<<0<<" ";
           else{
            cout<<a1[idx]<<" ";
           }
        }
        cout<<endl;
    }
}