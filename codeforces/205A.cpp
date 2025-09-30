#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<long long> a(n);
    for(int i=0 ; i<n ;i++){
        cin>>a[i];
    }
    int min=a[0] , I;
    for(int i=0 ; i< n ; i++){
        if(a[i]<=min){
            min=a[i];
            I=i;
        }
    }
    for(int i=0; i<n; i++){
        if(a[i]==min){
            a.erase(a.begin()+i);
        }
    }
    if(a.size()<n-1){
        cout<<"Still Rozdil";
    }else{
        cout<<I+1;
    }
}