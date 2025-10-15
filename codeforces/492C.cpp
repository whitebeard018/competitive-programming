#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    long long n, r, avg;
    cin>>n>>r>>avg;
    vector<long long> a(n), b(n);
    vector<pair<long long, long long>> v(n);
    long double sum=0, avg1=0;
    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i];
        sum+=a[i];
        v[i]={b[i], a[i]};
    }
    sort(v.begin(), v.end());
    long long need = avg*n-sum;
    long long cnt=0, i=0;
    while(need>0){
        if(v[i].second<r){
            cnt+=v[i].first*min(need, r-v[i].second);
            need-=min(need, r-v[i].second);
            i++;
        }else{
            i++;
        }
    }
    cout<<cnt;
}