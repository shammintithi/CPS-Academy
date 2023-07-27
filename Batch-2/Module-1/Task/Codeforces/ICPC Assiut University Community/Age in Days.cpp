// Written by: Shammin Akter Tithi
// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R

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
    int n, y, m, d;
    cin >> n;

    y = n / 365; //year
    m = n % 365 / 30; //month
    d = n % 365 % 30; //day

    cout << y << " years" << endl;
    cout << m << " months" << endl;
    cout << d << " days" << endl;
}