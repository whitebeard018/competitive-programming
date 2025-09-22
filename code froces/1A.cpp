#include <iostream>
using namespace std;
int main(){
    long long n,m,a;
    cin>>n>>m>>a;
    long long flagstones=0;
    if(n%a==0){
        flagstones=n/a;
    }
    else{
        flagstones=(n/a)+1;
    }
    if(m%a==0){
        flagstones=flagstones*(m/a);
    }
    else{
        flagstones=flagstones*((m/a)+1);
    }
    cout<<flagstones<<endl;
    return 0;
}