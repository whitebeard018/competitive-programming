#include<iostream>
#include <vector>

using namespace std;
int sum_of_digits(int n){
    int sum=0;
    while(n>0){
    sum +=n%10;
    n=n/10;
    }
    return sum;
}
bool diff_digits(int n){
    vector<int> s;
    while(n>0){
        s.push_back((n%10));
        n=n/10;
    }
    for(int i=0 ; i<s.size(); i++){
        for(int j=i+1; j<s.size(); j++){
            if(s[i]==s[j]){
                return false;
            }
        }
    }
    return true;
}
long long number(int n){
    for(long long int i=10 ; i<10000000 ; i++){
        for(int j=0 ; j<10 ; j++)
        if(sum_of_digits(i)==n && diff_digits(i)){
            return i;
        }
    }
    return -1;
}
int main(){
    int t;
    while(t--){
        int n;
        cin>>n;
        if(n<10){
            cout<<n<<endl;
        }
        else{

        }
    }
}