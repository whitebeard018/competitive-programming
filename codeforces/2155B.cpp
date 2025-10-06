#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
    int n,k;
    cin>>n>>k;
    vector<vector<char>> matrix(n, vector<char>(n, 'U')); 
    int I=1,J=0;
    bool b1=false;
    if(n*n-2==k){
        cout<<"YES"<<endl;
    }
    if(n==2){
        if(k==0){
        cout<<"DD"<<endl;
        cout<<"UU"<<endl;
        continue;
    }
    if(k==2){
        cout<<"DU"<<endl;
        cout<<"UU"<<endl;
        continue;
    }
    if(k==4){
        cout<<"UU"<<endl;
        cout<<"UU"<<endl;
        continue;
    }
    cout<<"NO";
    continue;
}
    else{
    for(int i=2; i<=n; i++){
        for(int j=2; j<=i; j++){
            if(n*n-i*j==k){
                cout<<"YES"<<endl;
                b1=true;
                I=i-1;
                J=j-1;
                break;
            }
        }
        if(b1) break;
    }
}
    if(!b1){
    cout<<"NO"<<endl;
    break;}
    if(b1){
      for(int i=n-1-J; i<n; i++){
        for(int j=0; j<=I; j++){
            if(j==0 && i!=n-1) matrix[i][j] = 'D';
            if(i==n-1-J && j!=0) matrix[i][j]= 'L';
            if(j==I && i!=n-1-J) matrix[i][j]= 'U';
            if(i==n-1 && j!= I) matrix[i][j]='R';
        }
      }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<matrix[i][j];
        }
        cout<<endl;
    }

    }
}
