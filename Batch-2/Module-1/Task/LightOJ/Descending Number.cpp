// Written by: Shammin Akter Tithi
// Problem Link: https://lightoj.com/problem/dimik-descending-number

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
    int cnt = 0;

    for(int i = 1000; i>= 1; i--){
        cout << i << sp;
        cnt++;
        
        if(cnt == 5){
            cout << endl;
            cnt = 0;
        }
    }
}