// Written by: Shammin Akter Tithi
// Problem Link: https://www.hackerrank.com/contests/cpc-batch-2-module-1-assignment-contest/challenges/class-8-aa-task-1-aa-calculate-the-xor

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
    ll a, b;
    cin >> a >> b;

    cout << (a ^ b) << endl;
}