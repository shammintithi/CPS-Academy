#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "dacbeEA ab";

    // s.erase(s.begin());//0(n)
    //s.erase(s.end() -1);// last character dlt
    //s.erase(s.begin() + 3);// index declare which one want to dlt
    s.erase (remove(s.begin(), s.end(), 'a'), s.end());//a single character delete

    cout << s << endl;
}