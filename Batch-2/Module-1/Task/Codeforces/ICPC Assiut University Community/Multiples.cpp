// Written by: Shammin Akter Tithi
// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J

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

        if (a % b == 0 or b % a == 0) cout << "Multiples" << endl;
        else cout << "No Multiples" << endl;
}