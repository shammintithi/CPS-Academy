#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "dacbeeaab";

    sort (s.begin(), s.end());
    int size = unique(s.begin(), s.end()) - s.begin();

    for(int i = 0 ; i < size ; i++) cout << s[i];
    cout << endl;
}