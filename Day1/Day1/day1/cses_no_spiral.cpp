#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cout<<"total test cases: ";
    cin>>t;
    while(t--){
        int x , y;
        cin>>x>>y;
        int z;
        int a[x][y];
        int x1=1 , y1=0;
        for(int i=1 ; i<26 ; i++ , y++){
            if(z=sqrt(i)){
                swap(x1, y1);
            }
            a[x1][y1]=i;
        }
        x1=x;
        y1=y;
        cout<<a[x1][y1]<<"\n";


    }
}