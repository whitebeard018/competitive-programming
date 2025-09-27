#include<iostream>
#include<vector>
#include <string>
using namespace std;
int main(){
    string a, b, c;
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            c += '1';
        } else {
            c += '0';
        }

}
    
    cout << c << endl;
    return 0;
}
