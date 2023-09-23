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
    int a[5];
    // cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4]; // type 1 for array input 
    // for(int i = 0; i < 5; i++){
    //     cin >> a[i];
    // } //type 2 for array input
    for(int i = 0; i < 5; i++){
        cin >> a[i];
    }

    cout << "Array :" << a[0] + a[1] + a[2] + a[3] + a[4] << endl;
}