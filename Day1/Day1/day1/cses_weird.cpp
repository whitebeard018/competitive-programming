#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i ; n>1 ; i++){
   if(n%2==0){
    n= n/2;
   }
   else{
    n=n*3+1;
   }
   cout << n << " ";
}
    return 0;
}