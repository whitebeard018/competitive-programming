#include<iostream>
#include<vector>
using namespace std;
vector<long long> h;
int n;
vector<long long> dp;
long long func(int i){
    if(i==0) return 0;
    if(dp[i]!=-1) return dp[i];
    long long cost=1e18;
    cost = min(cost, func(i-1)+ abs(h[i-1]-h[i]));
    if(i>1)
    cost = min(cost, func(i-2)+ abs(h[i-2]-h[i]));
    return dp[i]=cost;
}

int main(){
    cin>>n;
    h.resize(n);
    dp.assign(n, -1);
    for(long long &i: h) cin>>i;
    cout<<func(n-1)<<endl;
}
