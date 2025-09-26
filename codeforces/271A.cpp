#include <iostream>
#include<vector>
using namespace std;
bool distinct_digits(int n){
    vector<int> v;
    while(n){
        int d=n%10;
        v.push_back(d);
        n=n/10;
    }
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]==v[j])
            return false;
        }
    }
    return true;
}
int main(){
    int year;
    cin>>year;
    for(int i=0 ; i<10000; i++){
        year++;
        if(distinct_digits(year)){
            cout<<year;
            break;
        }
    }

}