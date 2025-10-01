#include<iostream>
using namespace std;
#include<vector>
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    vector<int> b(m);
    for(int i=0 ; i<m ; i++){
        cin>>b[i];
    }
    int max=0, cnt=0;
    for(int i=0; i<n; i++){
        for(int j=m-1; j>=0; j--){
            if(b[j]%a[i]==0){
                if( b[j]/a[i]>max)
               max= b[j]/a[i];
            }
        }
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0; j<m; j++){
            if( b[j]/a[i]==max && b[j]%a[i]==0){
               cnt++;
            }
        }
    }
    cout<<cnt;
}