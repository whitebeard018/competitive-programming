#include<iostream>
#include<vector>
using namespace std;
bool dsaa(long long s , string p){
    
}
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
		vector<long long> a(n);
        for (long long i = 0; i < n; i++)
            cin >> a[i];
        int m;
        cin >> m;
        vector<string> b(m);
        for (long long i = 0; i < m; i++)
            cin >> b[i];
            if(n==m){
                for(long long i=0 ; i<n ; i++){
                    for(long long j=i+1 ; j<m ; j++){

                      if(a[i]==a[j] && b[i] == b[j])
                      cout<<"YES";
                        else{
                        cout<<"NO";
                        break;
                    }
                }
                
                }
            }
            else cout<<"NO";
            cout << endl;
    }
}