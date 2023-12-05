// 1.Even Odd 1
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     for(int i = 1; i <= t; i++) {
//         int a, b;
//         cin >> a >> b;

//         int x = a + b;

//         cout << "Case " << i << ": " << x << endl;
//     }
// }
// 2. Even odd 2
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         if(n == 0) cout << "even" << endl;
//         else if(n % 2 == 0) cout << "even" << endl;
//         else cout << "odd" << endl;
//     }
// }
// 3. DEscending Number
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int cnt = 0;

//     for(int i = 1000; i >= 1; i--) {
//         cout << i << " " ;
//         cnt++;

//         if(cnt == 5){
//         cout << endl;
//         cnt = 0;
//         }
//     }
// }
// 4. print test Cases
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;

//     for (int i = 1; i <= t; i++){
//         int x;
//         cin >> x;
//         if(x == 0){
//             break;
//         }
//         cout << "Case " << i << ": " << x << endl;
//     }
// }
// 5. Swapping two numbers
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
    
//     for(int i = 1; i<= t; i++){
//         int x, y;
//         cin >> x >> y;

//         if(x == 0 && y == 0){
//             break;
//         }
//         if (x > y){
//             cout << y << " " << x << endl;
//         }
//         else cout << y << " " << x << endl;
//     }
// }
// 6. Min, Max and Sum
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     int min = 100123;
//     int max = -100123;
//     int sum = 0;

//     for (int i = 0; i < t; i++){
//         int n;
//         cin >> n;
//         if (n < min) min = n;
//         if (n > max) max = n;
//         sum += n;
//     }
//     cout << min << " " << max << " " << sum << endl;
    
// }