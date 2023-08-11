// Written by: Shammin Akter Tithi
// Problem Link: https://vjudge.net/contest/566680#problem/W

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
    int n, k, m;
    cin >> n >> k >> m;

    int sum = 0;
    for(int i = 1; i < n; i++){
        int num;
        cin >> num;

        sum += num;
    }
    int x = (n * m) - sum;

    if(x < 0) x = 0;

    if(x <= k) cout << x << endl;
    else cout << -1 << endl;
}