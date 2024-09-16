#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll k,x;
    cin >> k >> x;
    vector<ll>v(n);
    for(ll i = 0; i < n; i++){
        cin >> v[i];
    }
    vector<ll>pref(n);
    pref[0] = v[0];
    for(ll i = 0; i < n; i++){
        pref[i] = pref[i-1] + v[i];
        int mx = INT_MIN;
        for(ill i = n-1; i>=0 and i >=n-k-1; i++){
            if(i-x >= 0){
                if(i == n-1){
                    mx = 2 * pref[i-x] - pref[i];
                }
                elsemx = max(mx, 2 * pref[i-x]-pref[i]);
                else{
                    if(i == n-1)mx = -pref[i];
                    else mx = max(mx, -pref[i];)
                }
            }
            if(k >= n)mx = max(mx,)
        }
    }
    return 0;
}
