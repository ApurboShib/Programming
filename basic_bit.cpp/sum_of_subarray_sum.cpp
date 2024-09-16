// // brouthforce soluation..
// #include <bits/stdc++.h>
// using namespace std;
// #define endl '\n'
// #define ll long long
// const int MOD = 1e9 + 7;
// const int N = 1e5 + 9;

// signed main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int n;
//     cin >> n;
//     int a[n + 1];
//     int sum = 0;
//     for(int i = 1; i <= n; i++){
//         cin >> a[i];
//     }

//    for(int l = 1; l <= n; l++){
//     for(int r = l; r <= n; r++){
//         for(int i = l; i <= r; i++){
//             sum+= a[i];
//         }
//     }
//    }
//    cout << sum << endl;
//     return 0;
// }

// optimal soluation..
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[n];
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum+= (a[i] * (i + 1 * n - 1));

    }
    cout << sum << endl;
    return 0;
}
