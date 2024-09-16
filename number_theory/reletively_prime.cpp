#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll l,r;
    cin >> l >> r;
    bool f = false;
    if((r - l) % 2 == 0){
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        for(ll i = l; i <= r; i += 2){
            cout << i << ' ' << i+1 << endl;
        }
        f = true;
    }

    
    return 0;
}
