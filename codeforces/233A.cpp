#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%2==0) {
        for(int i=1; i<=n ; i++){
            cout<<i+1<<" "<<i<<" ";
            i++;
        }
    }
    else cout<<-1;
    return 0;
}