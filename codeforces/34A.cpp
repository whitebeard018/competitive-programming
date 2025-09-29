#include<iostream>
#include<vector>
using namespace std;
int main(){
int n;
cin>>n;
vector<int> a(n);
for(int i=0 ; i<n ; i++){
    cin>>a[i];
}
int I=0 , J=1;
int minx=abs(a[0]-a[1]);
for(int i=0 ; i<n-1 ; i++){
        if(abs(a[i]-a[i+1])<minx){
        minx=abs(a[i]-a[i+1]);
        I=i , J=i+1;
    }
}
if(abs(a[0]-a[n-1])<minx){
        minx=abs(a[0]-a[n-1]);
        I=0 , J=n-1;
}
cout<<I+1<<" "<<J+1;
}
