#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n);
        for(int i=0; i<n; i++) cin>>a[i];
        long long sum=0;
        for(int i=0; i<n; i++){
            if(a[i]<0) continue;
            int max1=a[i];
            while(a[i]>=0 && i<n){
                if(a[i]>max1) max1=a[i];
                i++;
            }
            sum+=max1; 
        }
        for(int i=0; i<n; i++){
            if(a[i]>0) continue;
            int max1=a[i];
            while(a[i]<=0 && i<n){
                if(a[i]>max1) max1=a[i];
                i++;
            }
            sum+=max1; 
        }
        cout<<sum<<endl;
    }
}
