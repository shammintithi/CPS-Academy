// Written by: Shammin Akter Tithi
// Problem Link: https://lightoj.com/problem/dimik-factorial

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

    while (t--){
        int n;
        cin >> n;

        int factorial = 1;

        for(int i = 0; i < n; i++){
            factorial *= i;
        }
        cout << factorial << endl;
    }
}