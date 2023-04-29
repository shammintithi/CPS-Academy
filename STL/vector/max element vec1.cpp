#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {5, 1, 3, 3, 7, 4, 1, 2, 1};
    vector<int> :: iterator it = max_element(v.begin(), v.end());
    cout << *it << endl;
    return 0;
}