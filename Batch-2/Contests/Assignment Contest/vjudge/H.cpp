// Written by: Shammin Akter Tithi
// Problem Link: https://vjudge.net/contest/566680#problem/H    

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
    vector<int> v(3);
    for(auto &u : v) cin >> u;
    sort(v.begin(), v.end());

    for(int i = 0; i < 3; i++){
        if(i == 2) cout << v[i];
        else cout << v[i] << sp;
    }
    cout << endl;
}