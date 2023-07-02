#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {4, 6, 3, 5, 9};

    //v.erase( v.begin() );
    v.erase( v.begin()+ 3);
    cout << v.size() << endl;
    for(auto u : v) cout << u << " ";
    cout << endl;
}