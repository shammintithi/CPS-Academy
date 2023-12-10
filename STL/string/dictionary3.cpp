 #include <bits/stdc++.h>
using namespace std;

#define Tithi ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main() {
    Tithi
    string s = "SHAMMIMN";

    //s.erase(remove (s.begin(), s.end(), 'M'), s.begin() +4);
    s.erase(remove (s.begin(), s.end(), 'M'), s.end());
    cout << s << endl;
}