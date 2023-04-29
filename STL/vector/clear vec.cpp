#include <bits/stdc++.h>
using namespace std;

int main (){
    vector<int> v = {2, 3, 4, 6,8};
    v.clear();
    //v.empty true hole 1 
    //v.empty false hole 0;
    v = {2, 3};
    cout << v.empty() << endl;
}