#include<iostream>
#include<vector>
using namespace std;
int n;
vector<long long> h, dp;
long long func(int i, int f){
    
    long long cost =1e18;
    if(i==0) return 0;
    if(dp[i]!=-1) return dp[i];
    for(int j=1; j<=f; j++){
        if(j<=i) 
        cost=min(cost, func(i-j, f)+ abs(h[i-j]-h[i]));
    }
    return dp[i]=cost;
}
int main(){
    int k;
    cin>>n>>k;
    h.resize(n);
    dp.assign(n,-1);
    for(long long &i: h) cin>>i;
    cout<<func(n-1, k)<<endl;
}