// Written by: Shammin Akter Tithi
// Problem Link: https://algo.codemarshal.org/contests/icpc-dhaka-preli-2017/problems/F

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
        int p, q, y;
        cin >> p >> q >> y;

        cout << (((p * 5) + (q * 2)) * 52) * y << endl;
}