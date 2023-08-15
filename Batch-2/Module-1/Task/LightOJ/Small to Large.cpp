// Written by: Shammin Akter Tithi
// Problem Link: https://lightoj.com/problem/dimik-small-to-large

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
    vector<int> v(3), s;

    while(t--){
        for(int i = 1; i <= 3; i++)cin >> v[i];
        s = v;

        sort(s.begin(), s.end());

        for(auto u : s){
            cout << "Case " << t << ": " << u << sp;
        }
    }
}