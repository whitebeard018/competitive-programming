#include <iostream>
using namespace std;
bool is_prime(int n){
    if(n<=1) return false;
    for(int i=2; i*i<=n; i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int  n, m;
    cin>>n>>m;
      int nxt = n + 1;
    while (nxt <= 50 && !is_prime(nxt)) ++nxt; 

    if (nxt == m) cout << "YES\n";
    else cout << "NO\n";
    return 0;

}
