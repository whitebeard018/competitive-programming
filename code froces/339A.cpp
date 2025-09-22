#include<iostream>
#include<vector>
#include<string>
#include<set>
#include<cctype>
#include<algorithm>
using namespace std;
int main(){
  string s;
    if (!getline(cin, s)) return 0; // read the whole line like "3+2+1"

    vector<char> digits;
    for (char c : s) {
        if (isdigit(static_cast<unsigned char>(c))) digits.push_back(c);
    }
   
    sort(digits.begin(), digits.end()); 
    for (size_t i = 0; i < digits.size(); ++i) {
        if (i) cout << '+';
        cout << digits[i];
    }
    cout << '\n';
    return 0;


}