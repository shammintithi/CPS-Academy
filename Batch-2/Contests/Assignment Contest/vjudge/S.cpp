// Written by: Shammin Akter Tithi
// Problem Link: https://vjudge.net/contest/566680#problem/S

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
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        if(n <= 10){
            cout << 0 << sp << n << endl;
        }
        else {
            cout << n - 10 << sp << 10 << endl;
        }
    }
}