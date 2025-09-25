#include<iostream>
using namespace std;
int main(){
long long a, steps=0;
cin>>a;
if(a%5==0)steps = a/5;
else steps = a/5 +1;
cout<<steps;
}