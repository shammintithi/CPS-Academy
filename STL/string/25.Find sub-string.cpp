#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "shammin akter tithi";

    if(s.find("kte") && s.find("thi") != -1) cout << "Sub string found: " << s << endl;
    else cout << "Not found";
}