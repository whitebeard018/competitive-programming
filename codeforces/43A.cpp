#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> a(n);
    int cnt1=1, cnt2=0;
    cin>>a[0];
    string s=a[0],s2;
    for(int i=1 ; i<n; i++){
        cin>>a[i];
        if(a[i]==s){
            cnt1++;
        }
        else {cnt2++;
        s2=a[i];}
    }
    if(cnt1>cnt2){
        cout<<s;
    }
    else cout<<s2;
}