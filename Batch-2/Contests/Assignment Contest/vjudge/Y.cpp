// Written by: Shammin Akter Tithi
// Problem Link: https://vjudge.net/contest/566680#problem/Y

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
    int n;
    cin >> n;
    
    vector <int> v(n);
    // for (auto &u : v) cin >> u;
    for(int i = 0; i < n; i++) cin >> v[i];

    reverse(v.begin(), v.end());
    for(int i = 0; i < n; i++){
        if(i == n -1) cout << v[i] << endl;
        else cout << v[i] << sp;
    }
}