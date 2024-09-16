#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, k, x;
    cin >> n >> k >> x;
    vector<ll> v(n);
    for(ll i = 0; i < n; i++){
        cin >> v[i];
    }
    vector<ll> pref(n);
    pref[0] = v[0];
    for(ll i = 1; i < n; i++){ 
        pref[i] = pref[i-1] + v[i];
    }
    ll mx = LLONG_MIN; 
    for(ll i = n-1; i >= 0 && i >= n-k-1; i--){
        if(i - x >= 0){
            ll val;
            if(i == n-1){
                val = 2 * pref[i-x];
            }
            else{
                val = 2 * pref[i-x] - pref[i];
            }
            mx = max(mx, val);
        }
        else{
            ll val;
            if(i == n-1){
                val = -pref[i];
            }
            else{
                val = -pref[i];
            }
            mx = max(mx, val); 
        }
    }
    if(k >= n){
        mx = max(mx, pref[n-1] * (k - n + 1LL));
    }
    cout << mx << endl;
    return 0;
}
