#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    long long n,k;
    cin>>n>>k;
    vector<long long> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());  

    if(k==n) {
    cout<<a[k-1];
    return 0;}

    if(k==0){
    if(a[0]>1) {cout<<1;
    return 0;
    }else {cout<<-1;
    return 0;
    }
}


    
    if(a[k-1]!=a[k] && a[k-1]!=++a[k]) cout<<a[k-1]++;
    else cout<<-1;
    

}

