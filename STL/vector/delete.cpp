#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {4, 6, 3, 5, 9};
    
    cout << v.back() << endl;
    v.pop_back();

    cout << v.back() << endl;

    cout << *v.begin() << endl;
}