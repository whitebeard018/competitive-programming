#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int &x:a) cin>>x;
        int max_pairs=0;
        sort(a.begin(), a.end());
        for(int s=2; s<=2*a.back(); ++s){
            int l=0, r=n-1, pairs=0;
            while(l<r){
                int sum=a[l]+a[r];
                if(sum==s){
                    ++pairs;
                    ++l;
                    --r;
                }else if(sum<s) ++l;
                else --r;
            }
            max_pairs=max(max_pairs, pairs);
        }
        cout<<max_pairs<<endl;
    }
}