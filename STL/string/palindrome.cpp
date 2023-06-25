#include <bits/stdc++.h>
using namespace std;

int main() {
    //string s = "aabAa";
     string s = "aabaa";
    string tmp = s;

    reverse(s.begin(), s.end());

    if(s == tmp) cout << "Palindrome" << endl;
    else cout << "Not Palindrome";
}