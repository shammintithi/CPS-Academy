#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "shammin";
    string t = "akter tihi akter";

    copy(t.begin() +6, t.begin() +10, back_inserter(s));
    cout << s << endl;
}