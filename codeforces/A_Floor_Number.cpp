#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        if(n <= 2) {
            cout << 1 << endl;
        }
        else {
            n-=2;
            cout << ceil(1.0 * n/x) + 1 << endl;
        }
    }

    return 0;
}
