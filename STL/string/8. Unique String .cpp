#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> v;

    v.push_back("Shammin");
    v.push_back("Akter");
    v.push_back("Shammin");
    v.push_back("tithi");
    v.push_back("jenny");
    v.push_back("tithi");

    // sort(v.rbegin(), v.rend());
    sort(v.begin(), v.end());

    int size = unique (v.begin(), v.end()) - v.begin();

    cout << size << endl; 
    for(int i = 0; i < size; i++) cout << v[i] << endl;
}