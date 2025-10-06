#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    long long n;
    cin>> n;
    if(n>=0) cout<<n;
    if(n<0){
        int last = n % 10;
        int temp = n / 10;
        int second_last = temp % 10;
        long long option1 = n / 10; // remove last digit
        long long option2 = (n / 100) * 10 + last; // remove second last digit
        cout << max(option1, option2);
    }
}