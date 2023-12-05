// 1. Print a Rectangle 
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     while(true){
//         int n, m;
//         cin >> n >> m;

//         if(n == 0 || m == 0)break;

//         for (int i = 1; i <= n; i++){
//             for (int j = 1; j <= m; j++){
//                 cout << '#';
//             }
//             cout << endl;
//         }
//         cout << endl;
//     }
// }
// 2. Print a Frame
#include <bits/stdc++.h>
using namespace std;

int main() {
    while(1){
        int h, m;
        cin >> h >> m;

        if(h == 0 || m == 0) break;

        for (int i = 1; i <= h; i++){
            cout << '#';
        }
        for (int j = 2; j <= m - 1; j++){
            cout << '.';
        }

        for (int i = 1; i <= h; i++){
            cout << '#';
        }
    }
}