#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "Shammin Tithi";

    string::iterator it;

    for(it=s.begin(); it!=s.end(); it++){
        cout << *it;
    }
    cout << endl;
}