#include<iostream>
using namespace std;
bool translation(string s , string t){
    if (s.length() != t.length()) return false;
    for(int i=0 ; i<s.length(); i++){
        if(s[i] != t[s.length()-1-i]) return false;
    }
    return true;
}

int main(){
    string s, t;
    cin>>s>>t;
    if(translation(s,t)) cout<<"YES";
    else cout<<"NO";
    return 0;
}