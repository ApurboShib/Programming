// // brouthforce soluation...
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
//     int ans = 0;
//     for(int l = 0; l < n; l++){
//         for(int r = l + 1; r < n; r++){
//             for(int i = l; i < r; i++){
//                 ans^= a[i];
//             }
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }

// optimal soluation.

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
    int a[n], ans = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
     int cnt = (i * n - i + 1);
    if(cnt & 1){
        ans ^= a[i];
    }
    }
    cout << ans << endl;
    return 0;
}
