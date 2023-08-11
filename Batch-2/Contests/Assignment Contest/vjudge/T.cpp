// Written by: Shammin Akter Tithi
// Problem Link: https://vjudge.net/contest/566680#problem/T

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
    while(true) {
        int h, m;
        cin >> h >> m;

        if(h == 0 and m == 0) {
            break;
        } 
        for(int i = 0; i < h; i++){
            for(int j = 0; j < m; j++){
                cout << '#';
            }
            cout << endl;
        }
        cout << endl;
    }
    cout << endl;
}