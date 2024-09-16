#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;
vector<ll> v;
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, k;
    cin >> n >> k;
    for(ll i = 1; i*i<=n; i++){
        if(n % i ==0){
            v.push_back(i);
            if(i != n/i){
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin(), v.end());
    // for(auto x : v){
    //     cout << x << ' ';
    // }
    // cout << endl;
    if(v.size() < k){
        cout << -1 << endl;
    }
    else{
        cout << v[k-1] << endl;
    }
    return 0;
}
