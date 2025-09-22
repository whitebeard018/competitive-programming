#include <bits/stdc++.h>
using namespace std;

bool isBalanced(string s) {
    stack<char> st;
    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            // TODO: push opening bracket
            
        } else {
            // TODO: check if stack is empty OR top doesn't match
            
        }
    }
    // TODO: return true if stack is empty
}

int main() {
    string s;
    cin >> s;
    if (isBalanced(s)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
