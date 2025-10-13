#include<iostream>
#include<vector>
using namespace std;
int main(){
    long long n, k;
    cin>>n>>k;
    vector<int> h(n), sum(n);
    cin>>h[0];
    sum[0]=h[0];
    for(int i=1; i<n; i++){
    cin>>h[i];
    sum[i]=sum[i-1]+h[i];
    }
    long long I=0;
    long long min=sum[k-1];
    for(int i=1; i<n+1-k; i++){
        if(min>sum[i+k-1]-sum[i-1]){
            min=sum[i+k-1]-sum[i-1];
            I=i;
        }
    }
    cout<<I+1<<endl;
}