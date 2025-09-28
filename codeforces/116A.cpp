#include<iostream>
#include<vector>
using namespace std;
int main(){
int n;
cin>>n;
vector<int> a(n) , b(n);
int suma=0 , sumb=0 , max=0;
for(int i=0 ; i<n ; i++){
    cin>>a[i]>>b[i];
  suma+=a[i];
  sumb+=b[i];
  if(max < sumb - suma)
  max = sumb - suma;
}
cout<<max;
return 0;
}