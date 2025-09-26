#include <iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> x(n);
    vector<int> y(n);
    vector<int> z(n);
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i]>>z[i];
    }
    int sumx=0 , sumy=0 , sumz=0;
    for(int i=0 ; i<n ; i++){
        sumx+=x[i];
        sumy+=y[i];
        sumz+=z[i]; 
    }
    if(sumx==0 && sumy==0 && sumz==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}