#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {5, 3, 3, 7, 1, 2, 1};
    int n = max_element(v.begin(), v.end()) - v.begin();
    cout << n << endl;

    return 0;
}