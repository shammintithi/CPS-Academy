// Written by: Shammin Akter Tithi
// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K

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
        int a, b, c;
        cin >> a >> b >> c;

        int mx, min;

        if(a >= b  and a >= c) mx = a;
        else if(b >= c and b >= a) mx = b;
        else mx = c;

        if(a <= b and a <= c) min = a;
        else if(b <= c and b <= a) min = b;
        else min = c;

        cout << min << sp << mx << endl;
        
}