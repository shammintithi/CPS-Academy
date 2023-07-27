// Written by: Shammin Akter Tithi
// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M

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
        char c;
        cin >> c;

        int ascii = c;//variable ta ascii te niye char e rakhbe.

        if(c >= 97 and c <= 122) {//small letter a -z = 97 - 122

        cout << "ALPHA" << endl << "IS SMALL" << endl;
        }

        else if(c >= 65 and c <= 90){//capital letter A - Z = 65 - 90
        cout << "ALPHA" << endl << "IS CAPITAL" << endl;
        }
        else{
            cout << "IS DIGIT" << endl;
        } 
}