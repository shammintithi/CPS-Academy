#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "shammin ";
    string t = "akter tithi akter";

    copy(t.begin() +6, t.begin() +11, back_inserter(s));
    cout << s << endl;
}
//sub- string shamne theke shuru hole prefix 
//sub- string pichon theke shuru hole suffix 