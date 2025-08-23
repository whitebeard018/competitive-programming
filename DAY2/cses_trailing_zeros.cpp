#include<iostream>
#include<cmath>
using namespace std;
int main(){
   long long int n;
    cin>>n;
    long long int count=0;
    for(long int i=1 ; n/pow(5,i)>=1 ; i++){
        count+=n/pow(5,i);
    }
    cout<<count<<endl;
}