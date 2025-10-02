#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int k;
    cin>>k;
    if(k==0) {cout<<0;
    return 0;}
    vector<int> a(12);
    for(int i=0; i<12; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    long long sum=0, I=0;
    bool b1=true;
    for(int i=11; i>=0; i--){
       sum+=a[i];
       if(sum==k){
       I=i;
       b1=true;
       break;
    }
       if(sum>k){
       I=i;
       b1=true;
       break;
    }
    if(sum<k) b1=false;
}
if(b1)
cout<<12-I;
else cout<<-1;
}