#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> v;

    v.push_back("Shammin");
    v.push_back("Akter");
    v.push_back("shammin");
    v.push_back("tithi");
    v.push_back("Tas");
    v.push_back("jenny");
    v.push_back("Raifa");

    sort(v.rbegin(), v.rend()); //decsending largest to smallest
    //sort(v.begin(), v.end());
    for(auto u : v) cout << u << endl;

}