// Written by: Shammin Akter Tithi
// Problem Link: https://vjudge.net/contest/566680#problem/R

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
    int n;
    int min  = 1000000;
    int max = -1000000;

    long long sum = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        
        if(x < min) {
            min = x;
        }
        if (x > max){
            max = x;
        }
        sum += x;
    }
    cout << min << sp << max << sp << sum << endl;
}