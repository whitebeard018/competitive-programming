#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    int cnta=0, cntb=0; 
    for(int i=0; i<44; i++){
        for(int j=0; j<44; j++){
            if(i*i+j-n==0 && j*j+i-m==0){
                cnta++;
            }
        }
 }
    cout<<cnta;
}