#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {5, 1, 3, 3, 4, 1, 2, 1};
    sort(v.begin(), v.end ());
    ///unique (v.begin(), v.end ()); 
    //print for unique values

    //int size = unique (v.begin(), v.end ()) - v.begin ();
    //cout << size << endl;
    //for(int i = 0; i < size; ++i) cout << v[i] << " ";

    int x = unique (v.begin(), v.end ()) - v.begin (); 
    for(int i = 0; i < x; ++i) cout << v[i] << " ";
    cout << endl;
}