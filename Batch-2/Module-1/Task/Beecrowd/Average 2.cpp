
#include <bits/stdc++.h>
using namespace std;

int main() {
    double A, B, C, AVG;
    cin >> A >> B >> C;

    AVG = ((A * 2) + (B * 3) + (C * 5)) / 10.0;
    cout << "MEDIA = " << fixed << setprecision(1) << AVG << endl;
}