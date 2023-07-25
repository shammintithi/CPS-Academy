// Written by: Shammin Akter Tithi
// Problem Link: https://vjudge.net/contest/566680#problem/G

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
    int a, b;
    cin >> a >> b;

    if((a == 1 && b == 2) || (a == 2 && b == 1)) cout << "3" << endl;
    else if((a == 3 && b == 1) || (a == 1 && b == 3)) cout << "2" << endl;
    else cout << "1" << endl;
}