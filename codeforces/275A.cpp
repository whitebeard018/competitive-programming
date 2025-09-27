// #include<iostream>
// #include<vector>
// using namespace std;
// int  main(){
//  vector<vector<int>> a(3, vector<int>(3));
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>a[i][j];
//         }
//         cout<<endl;
//     }
//     vector<vector<int>> grid(3, vector<int>(3, 1));
//     for(int i=0;i<3;i++){
//         for(int j=0; j<3 ; j++){
//         if(a[i][j]%2==0){
//             continue;
//         }
//         else{
//            if(i<2)
//             a[i+1][j]^=1;
//             if(j<2)
//             a[i][j+1]^=1;
//             if(i>0)
//             a[i-1][j]^=1;
//             if(j>0)
//             a[i][j-1]^=1;
//             a[i][j]^=1;
//         }
        
//     }
//         cout<<endl;
//     }

//     for(int i=0 ; i<3 ; i++){
//         for(int j=0 ; j<3 ; j++){
//         a[i][j]+=1;
//         cout<<a[i][j];
//         }
//     cout<<endl;

// }
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> a(3, vector<int>(3));

    // read inputs
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    // initial grid is all 1's
    vector<vector<int>> grid(3, vector<int>(3, 1));

    // apply presses
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (a[i][j] % 2 == 1) { // pressed odd times
                // toggle self
                grid[i][j] ^= 1;
                // toggle neighbors
                if (i > 0) grid[i-1][j] ^= 1;
                if (i < 2) grid[i+1][j] ^= 1;
                if (j > 0) grid[i][j-1] ^= 1;
                if (j < 2) grid[i][j+1] ^= 1;
            }
        }
    }

    // print result
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << grid[i][j];
        }
        cout << "\n";
    }
    return 0;
}
