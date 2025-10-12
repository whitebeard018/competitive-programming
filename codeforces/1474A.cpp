#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string b;
        cin>>b;
        vector<int>a(n);
         a[0]=1;
         cout<<a[0];

        for(int i=1; i<n; i++){
            int prevsum = a[i-1] + (b[i-1] - '0'); 
            int bi = b[i] - '0';
            if(prevsum == 2 && bi == 1) a[i] = 0;
            else if(prevsum == 2 && bi == 0) a[i] = 1;
            else if(prevsum == 1 && bi == 1) a[i] = 1;
            else if(prevsum == 1 && bi == 0) a[i] = 0;
            else if(prevsum == 0 && bi == 1) a[i] = 1;
            else if(prevsum == 0 && bi == 0) a[i] = 1;
            cout << a[i];
        }
        cout<<endl;
        
    }
}
