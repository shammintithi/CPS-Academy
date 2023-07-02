#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {5, 6, 1, 4};

    reverse (v.begin(), v.end());
    
    while(!v.empty()) {
        cout << v.back() << endl;
        v.pop_back();
    }
}