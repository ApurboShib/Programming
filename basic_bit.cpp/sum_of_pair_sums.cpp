// // brouthforce soluation..
// O(n^2);
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
    int a[n + 1];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    int sum = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            sum+=a[i] + a[j];
            //cout << a[i] << "+" << a[j] << endl;
        }
    }
 cout << sum << endl;

    return 0;
}

// optimal soluation..
// complexity O(n).

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
//         sum+= 2 * n * a[i];

//     }
//     cout << sum << endl;
//     return 0;
// }
