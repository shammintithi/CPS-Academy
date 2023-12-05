#include <bits/stdc++.h>
using namespace std;

int a[100123];
int cnt[max];

int main() {
    int n;

    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++){
        cnt += a[i];

        cout << a[i] << endl;
    }
}