#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<long long> t(n);
    for(int i=0; i<n; i++) cin>>t[i];
    long long sum1=0, sum2=0, l=0, r=n-1;
    for(int i=0; l<=r; i++){
        if(sum1<sum2){
            sum1+=t[l];
            l++;
        }
        else if(sum2<sum1){
            sum2+=t[r];
            r--;
        }
        else if(sum1==sum2 && l==r) {sum1+=t[l];
            l++;
            break;}
        else if(sum1==sum2){
            sum1+=t[l]; l++;
            sum2+=t[r]; r--;
        }
    }
    cout<<l<<' '<<n-1-r;
}