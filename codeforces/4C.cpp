#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    unordered_map<string, int> freq1, freq2;
    for(const string &s: a) {freq1[s]++;
       freq2[s]++;}
    for(int i=0; i<n; i++){
        if(freq1[a[i]]==freq2[a[i]]){
            cout<<"OK"<<endl;
        }
        if(freq1[a[i]]!=freq2[a[i]] && freq1[a[i]]>0){
            cout<<a[i]<<freq2[a[i]]-freq1[a[i]]<<endl;
        }
        freq1[a[i]]--;
    }
}