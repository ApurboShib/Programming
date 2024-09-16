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
    while(n--) {
        int x , y;
        cin >> x >> y;
        if(y < -1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}
