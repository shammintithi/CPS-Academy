#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s; 

    int a, b, c;
    a = s[0] - '0'; //character to integer
    b = s[1] - '0';
    c = s[2] - '0';

    cout << (a * 100 + b * 10 + c * 1) + ( b * 100 + c * 10 + a * 1) + ( c * 100 + a * 10 + b * 1) << endl;
}

    // int n;
    // cin >> n;

    // int c = n % 10;
    // n /= 10;
    // int b = n % 10;
    // n /= 10;
    // int a = n % 10;

    // int n1 = (a * 100) + (b * 10) + (c * 1);
    // int n2 = (b * 100) + (c * 10) + (a * 1);
    // int n3 = (c * 100) + (a * 10) + (b * 1);

    // cout << n1 + n2 + n3 << endl;