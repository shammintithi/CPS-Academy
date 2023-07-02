#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    vector<int> v;

    //take input for n
    cin >> n;
    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;
        v.push_back(c);
    }
    //take output for n
    cout << v.size() << endl;
    for (int i = 0; i < v. size(); i++) cout << v[i] << " ";
    cout << endl;
}