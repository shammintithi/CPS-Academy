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
int main() {
    Tithi
    int a[], cnt;
    int n;
    cin >> n;

    for(int i = 0; i <= n; i++) cin >> a[i];

    for(int i = 0; i <= n; i++) cnt++;

    int q;
    cin >> q;

    while(q--){
        int a;
        cin >> a;
        cout << cnt[a] << endl
    }
}
