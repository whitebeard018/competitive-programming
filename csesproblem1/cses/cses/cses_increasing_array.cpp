#include <iostream>
#include<vector>
using namespace std;

int main() {
    long long int n;
    cin>>n ;
    vector<long long int> a(n);
        
    for (long long int i = 0; i < n; ++i) cin >> a[i];
    
   long long int count=0;
    for(long long int i=0 ; i < n-1 ; i++){
    if(a[i]>a[i+1])
      {
        
    count += a[i] - a[i+1];
    a[i+1] = a[i];
    } 
    else{
        count = count;
    }
    }
    cout<<count<<endl; 
    return 0;
}