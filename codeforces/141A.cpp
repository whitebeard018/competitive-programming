#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    s1=s1+s2;
    sort(s1.begin() , s1.end());
    
    sort(s3.begin() , s3.end());
    if (s1.size() != s3.size()){
        cout << "NO\n";
        return 0;
    }
    bool b=true;
   for(int i=0 ; i<s1.size() ; i++ ){
     if(s1[i]!=s3[i] ){
        b=false;
        break;
   }
}
if(b) cout<<"YES";
else cout<<"NO";
} 