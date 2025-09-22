#include<iostream>
using namespace std;
int main(){
    int M , N ;
    cin>>M>>N;
    if(M%2==0 || N%2==0){
cout<<M*N/2<<endl;

    }
    else{
        cout<<(M*N-1)/2;
    }
    return 0;
}