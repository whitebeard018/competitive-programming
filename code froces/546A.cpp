#include<iostream>
using namespace std;
int main(){
    long long k,n,w;
    cin>>k>>n>>w;
    if((w*(w+1)/2*k - n )>=0)
    cout<< w*(w+1)/2*k - n;
    else cout<<0;
}