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

#define sp " "
#define ll long long
#define ull unsigned long long
#define ld long double
#define rp(x) cout << fixed << setprecision(x)

#define Tithi ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main() {
    Tithi
    int a[123], n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++){
        a[i]++;
    }
    // for(int i = 1; i <= n; i++){
    //     a[i]+= 10;
    // }
    // for(int i = 1; i <= n; i++){
    //     a[i]--;
    // } //decrement
    for (int i = 1; i <= n; i++){
        cout << a[i] << sp;
    }
}