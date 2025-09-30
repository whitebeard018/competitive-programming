#include<iostream>
#include<vector>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long sum=0,cnt5=0, cnt0=0;
    vector<int> cards(n);
    bool b1=true;
    for(int i=0; i<n; i++){
        cin>>cards[i];
        sum+=cards[i];
        if(cards[i]==0)
        b1=false;
        if(cards[i]==5) cnt5++;
        if(cards[i]==0) cnt0++;
    }
    if(b1)
    cout<<-1;
    else{
        if(cnt5>=9){
            for(int i=0 ; i<9*(cnt5/9); i++) cout<<5;
            for(int i=0 ; i<cnt0; i++) cout<<0;
        }
        else cout<<0;
        
    }
}