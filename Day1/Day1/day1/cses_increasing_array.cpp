#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n ;
    vector<int> a(n);
        
    for (int i = 0; i < n; ++i) cin >> a[i];
    
    int count=0;
    for(int i=0 ; i < n-1 ; i++){
    if(a[i]>a[i+1])
      {
        ;
    count += a[i] - a[i+1];
    } 
    else{
        count = count;
    }
    }
    cout<<count<<endl; 
    return 0;
}