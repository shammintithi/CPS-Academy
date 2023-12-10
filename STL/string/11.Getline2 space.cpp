#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for(int i = 1; i <= t; i++) {
        string s;
        char c;
        cin >> c;
        getline(cin, s);

        s = c + s;
        cout << "Case " << i << ": " << s << endl;
    }
}   