// Written by: Shammin Akter Tithi
// Problem Link: https://vjudge.net/contest/566680#problem/P

#include <bits/stdc++.h>
using namespace std;

#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define yes cout << "yes" << endl
#define no cout << "no" << endl

#define sp " "
#define ll long long
#define ull unsigned long long
#define ld long double
#define rp(x) cout << fixed << setprecision(x)

#define Tithi ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main() {
    Tithi

    while(1){
    int x, y;
    cin >> x >> y;
    
    if(x == 0 and y == 0){
        break;
    }
    else if(x >= y) {
        cout << y << " " << x << endl;
    }
    else{
        cout << x << " " << y << endl;
    }
    }
}

//     while(1){
//         int x, y;
//         cin >> x >> y;

//         if(x == 0 and y == 0){
//             break;
//         }
//         cout << min(x, y) << sp << max(x, y) << endl;
//     }
// }