// Written by: Shammin Akter Tithi

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
    int a[3][4], cnt = 1;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            a[i][j] = cnt;
            cnt++;
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout << (i, j) << sp << a[i][j];
        }
    }
    cout << endl;
}




// // Written by: Shammin Akter Tithi

// #include <bits/stdc++.h>
// using namespace std;

// #define YES cout << "YES" << endl
// #define NO cout << "NO" << endl
// #define Yes cout << "Yes" << endl
// #define No cout << "No" << endl
// #define yes cout << "yes" << endl
// #define no cout << "no" << endl

// #define sp " "
// #define ll long long
// #define ull unsigned long long
// #define ld long double
// #define rp(x) cout << fixed << setprecision(x)

// #define Tithi ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// int main() {
//     Tithi
//     int a[3][4];//row column

//     a[0][0] = 12;
//     cout << "(0, 0) : " << a[0][0];

//     a[0][1] = 21;
//     cout << sp << "(0, 1) : " << a[0][1];

//     a[0][2] = 32;
//     cout << sp << "(0, 2) : " << a[0][2];

//     a[0][3] = 11;
//     cout << sp << "(0, 3) : " << a[0][3];

//     a[0][4] = 25;
//     cout << sp << "(0, 4) : " << a[0][4];

//     cout << endl;

//     a[1][0] = 54;
//     cout << "(1, 0) : " << a[1][0];
// }