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

#define ll long long
#define ull unsigned long long
#define ld long double

#define Tithi ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main() {
    Tithi
    ll a, b, c;
    cin >> a >> b >> c;

    cout << (((a * a * a * a) + (3 * a * c)) * ((a * a * a * a) + (3 * a * c))) + (4 *(b * b) * c) + (c * c) << endl;
}