#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<double> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    double sum=0;
    for(int i=0 ; i<n ; i++){
        sum += a[i];
    }
    cout<<1.0*sum/n;
    return 0;
}