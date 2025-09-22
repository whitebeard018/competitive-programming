#include<iostream>
using namespace std;
int main(){
   long long int n;
cin>>n;
string s;
cin>>s;
int cntA=0 , cntD=0;
for(int i=0; i<n ; i++){
    if(s[i]=='A') cntA++;
    else cntD++;
}
if(cntA>cntD) cout<<"Anton";
else if(cntD>cntA) cout<<"Danik";
else cout<<"Friendship";

}