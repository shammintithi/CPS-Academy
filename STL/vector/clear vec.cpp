#include <bits/stdc++.h>
using namespace std;

int main (){
    vector<int> v = {2, 3, 4, 6,8};
    v.clear();
    //v.empty true 1 
    //v.empty false 0
    v = {2, 3};
    cout << v.empty() << endl;
}