#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll sum = 0;
        vector <ll> v(n);
        for (ll i = 0; i<n; i++){
            cin >> v[i];
            sum+=v[i];
        }

        sum*=2;
        ll ans = 0;
        if(sum % n ==0){
            sum/=n;
            map<ll,ll>mp;
            for(ll i =0; i<n; i++){
                ans+=mp[sum - v[i]];
                mp[v[i]]++;
            }
        }
        cout << ans << endl;

    }
    return 0;
}
