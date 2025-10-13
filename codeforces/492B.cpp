#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    long long n, l;
    cin>>n>>l;
    vector<long double> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a.begin(), a.end());
    double minx=0, miny=0;
    if(n==1) {
        cout<<a[0];
        return 0;}
    if(a[0]!=0) miny=a[0];
    if(a[n-1]!=l) {
        if(l-a[n-1]>miny)
        miny=l-a[n-1];
    }
    for(int i=0; i<n-1; i++){
        if(a[i+1]-a[i]>minx){
            minx=a[i+1]-a[i];
        }
    }
    cout<<max(miny, minx/2.0);
}