#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    vector<int> a(n);
    for (int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    long int sum=0;
    for(int i=0; i<m; i++){
        if(a[i]<=0)
        sum+=a[i];
    }
 cout<<abs(sum);
}