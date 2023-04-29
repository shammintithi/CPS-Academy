#include <bits/stdc++.h>
using namespace std;

int main(){
//built in e index e variable 0 rakha hoy kintu , diye variable rakha jay 
    vector<int>v (10,5);

    cout << v.size () << endl;
    for(int i=0; i<v.size(); i++) cout << v[i] << " ";
    cout << endl;

    v[4] = 6;

    cout << v[4] << endl;
}