#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n) , b(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    b=a;
    if(a[n-1])
    sort(a.begin() , a.end());
    for(int i=n-1 ; i>=0 ; i--){
        if(a[n-1]%2==0){
        if(b[i]==a[n-1]-1){
        cout<<i+1;
        break;
     }
      if(b[i]==a[n-1]){
        cout<<i+1;
        break;
     }
        }
    
    }

}