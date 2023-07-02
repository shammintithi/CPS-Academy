//resize the vector using array access

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v(10); // or v.resize(10);
//take input
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> v[i];
//take output
    cout << v.size() << endl;
    for(int i = 0; i < n; i++) cout << v[i] << " ";
    cout << endl;
}