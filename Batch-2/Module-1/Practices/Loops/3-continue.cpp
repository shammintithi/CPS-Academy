#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;

    for (int i = 1; i <= x; i++) {
        if(i % 5 == 0) {
            cout << "Ignore it!" << endl;
            continue;
            cout << "Faltu" << endl;
        }
        if (i % 2 == 1){
            cout << "Odd: " ;
        }
        else cout << "Even: ";
        cout << i << endl;
    }
}

// continue: er pore {ei brackets er moddhe ja ja thakbe shob kisu off hoye jabe}