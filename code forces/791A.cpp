#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int count =0;
    for (int i=0; a<=b; i++){
        a=a*3;
        b=b*2;
        count++;
    }
    cout<<count ;
}
