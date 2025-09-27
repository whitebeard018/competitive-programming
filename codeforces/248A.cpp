#include<iostream>
#include<vector>

using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<long long> l(n) , r(n);
    for(int i=0; i<n; i++){
        cin>>l[i]>>r[i];
        cout<<endl;
    }
    long long cntl1=0 , cntr1=0 , cntl0=0 , cntr0=0;
    for(int i=0; i<n; i++){
        if(l[i]==1) cntl1++;
        else cntl0++;
        if(r[i]==1) cntr1++;
        else cntr0++;
    }
    cout<<min(cntl1 , cntl0) + min(cntr1 , cntr0);
    return 0;
}