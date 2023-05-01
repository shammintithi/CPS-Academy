#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "dacbeeaab";

    string a = *max_element (s.begin(), s.end()) - s.begin();
    string b = *min_element (s.begin(), s.end()) - s.begin();

    cout << a << endl;
    cout << b << endl;
}