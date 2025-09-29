#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long double x , y , z;
    cin>>x>>y>>z;
    cout << (sqrt(z * x / y) + sqrt(x*y/z) + sqrt(y*z/x))*4;
}