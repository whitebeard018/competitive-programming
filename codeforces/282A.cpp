#include<vector>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
int cnt=0;
    for(int i=0 ; i<n ; i++){
        string a;   cin>>a;
        if (a=="++X" )
        cnt++;
         if(a=="--X")
         cnt--;
         if(a=="X++")
         cnt++ ;
         if( a=="X--")
         cnt--;
    }
    cout<<cnt;
}