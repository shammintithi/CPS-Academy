#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int x = 0;

    while(s[x] != '\0')//while(s[x] != 0)  
    {
        cout << x << ": " << s[x] << endl;
        x++;
    }
    for(int i = 0; i < x; i++){
        s[i]++;
    }
    cout << s ;
}