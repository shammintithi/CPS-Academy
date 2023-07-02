#include <bits/stdc++.h>
using namespace std;
const double PI = acos(-1);


int main() {
    double r;
    cin >> r;

    double area = PI * r * r;
    double circumference = 2 * PI * r;
    cout << fixed << setprecision(6) << area << " " << circumference << fixed << setprecision(6) << endl;
}