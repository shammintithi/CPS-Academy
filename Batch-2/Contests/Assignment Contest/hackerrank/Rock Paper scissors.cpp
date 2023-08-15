// Written by: Shammin Akter Tithi
// Problem Link: https://www.hackerrank.com/contests/cpc-batch-2-module-1-assignment-contest/challenges/class-10-aa-task-1-aa-rock-paper-scissors

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
    char c1, c2;
    cin >> c1 >> c2;    

    if((c1 == 'p' and c2 == 'r') or (c1 == 'r' and c2 == 's') or (c1 == 's' and c2 == 'p')){
        cout << "First Player" << endl;
    }
    else if((c1 == 's' and c2 == 'r') or (c1 == 'p' and c2 == 's')){
        cout << "Second Player" << endl;
    }
    else {
        cout << "Draw" << endl;
    }
}