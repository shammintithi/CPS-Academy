#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {5, 7, 3, 3, 4, 1, 2, 1};
    
    //where to start to where this will be end


    //sort(v.begin(), v.end());
    sort (v.begin()+1, v.begin()+5);
    //complexity : 0(nlog2(n))

    for (auto u : v) cout << u << " ";
    cout << endl;
}