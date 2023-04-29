//can be used iterator followed by max

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {5, 1, 3, 3, 7, 1, 2, 1};
    int n = min_element(v.begin(), v.end()) - v.begin();
    cout << n << endl;

    return 0;
}