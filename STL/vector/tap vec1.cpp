#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v = {2,3,4,6,7};
    vector<int> tap;

    tap = v;

    cout << tap.size() << endl;
    for (int i = 0; i < tap.size(); i++)cout << tap[i] << " ";
    cout << endl;

    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
    cout << endl;
}