#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int moves=0;
    auto max_it = max_element(a.begin(), a.end());
    int max_val = *max_it;
    for(int i=0; i<n; i++){
        if(a[i] == max_val){
            for(int j=i; j>0; j--){
                swap(a[j], a[j-1]);
            }
            moves += i;
            break;
        }
    }
    auto min_it = min_element(a.begin(), a.end());
    int min_val = *min_it;
    for(int i=n-1; i>=0; i--){
        if(a[i] == min_val){
            moves += (n-1-i);
            break;
        }
    }
    cout<<moves;
    return 0;
}