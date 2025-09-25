#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int n;
    cin>>n;
    vector<long long int> a(n-1);
    for(int i=0 ; i<n-1 ; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    for(int i=1 ; i<=n ; i++){
        if(a[i-1]!=i){
            cout<<i;
            return 0;
        }
        
    }

    return 0;
}
