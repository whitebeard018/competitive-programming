#include<iostream>
#include<vector>
using namespace std;

int fibonacci_digit(int n){
    vector<int> fib;
    fib.push_back(0);
    fib.push_back(1);
for(long long i=2 ; i<=n+5; i++){
    fib.push_back(fib[i-1] + fib[i-2]);
    if(fib[i]==n){
        return i;
    }
}
}
int main(){
    long long n;
    cin>>n;
     vector<int> fib;
    fib.push_back(0);
    if(n==0){
        cout<<0<<" "<<0<<" "<<0;
        return 0;
    }
    fib.push_back(1);
    if(n==1){
        cout<<0<<" "<<0<<" "<<1;
        return 0;
    }
for(long long i=2 ; i<=n+5; i++){
    fib.push_back(fib[i-1] + fib[i-2]);
    if(fib[i]==n){
        break;
    }
}
    if(fibonacci_digit(n)==3){
        cout<<0<<" "<<1<<" "<<1;
    }
    if(fibonacci_digit(n)==4){
        cout<<1<<" "<<1<<" "<<1;
    }
    if(fibonacci_digit(n)>=5){
        cout<<fib[fibonacci_digit(n)-1]<<" "<<fib[fibonacci_digit(n)-3]<<" "<<fib[fibonacci_digit(n)-4];
    }
}