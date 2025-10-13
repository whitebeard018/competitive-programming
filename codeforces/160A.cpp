#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    long long sum=0, sum1=0, cnt=0;
    for(int i=0; i<n; i++) {cin>>a[i];
        sum+=a[i];}
    sort(a.begin(), a.end());
    for(int i=n-1; 2*sum1<=sum && i>=0; i--){
        sum1+=a[i];
        cnt++;
    }
    cout<<cnt<<endl;
}