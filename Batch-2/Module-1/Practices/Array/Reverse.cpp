// Written by: Shammin Akter Tithi
// Problem Link: 

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
const int mx = 100123;
int a[mx], b[mx];
int main() {
    Tithi
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for(int i = 1; j = n; i <= n; i++, j--){
        b[j] = a[i];
    }
    for (int i = 1; i <= n; i++){
        cout << b[i];
    }
    cout << endl;
}