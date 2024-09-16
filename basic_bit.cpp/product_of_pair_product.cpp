// // brouthforce soluation.
// // complexity O(n^2).
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
//     int a[n];
//     for(int i = 0; i < n; i++){
//         cin >> a[i];
//     }
//     int ans = 1;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             ans*= a[i] * a[j];
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }

// optimal soluation.
// complexity O(n).

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
    int a[n], ans = 1;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        ans*= pow(a[i],2 * n);
    }
    cout << ans << endl;
    return 0;
}
