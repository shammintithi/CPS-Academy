#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;

    for (int i = 1; i <= x; i++) {
        if(i % 5 == 0) {
            cout << "Ignore it!" << endl;
            break;
            cout << "Faltu" << endl;
        }
        if (i % 2 == 1){
            cout << "Odd: " ;
        }
        else cout << "Even: ";
        cout << i << endl;
    }
}

// break: break ekbar pele erpor r kono for loop er {ei brackets er moddhe ja ja thakbe ta kaj krbe na}