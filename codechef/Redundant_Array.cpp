#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        map<int, int> mp;
        for (int x : v) {
            mp[x]++;
        }
        ll mn = LLONG_MAX;
        for (auto x : mp) {
            ll mx = x.second;
            ll mx2 = x.first;
            mn = min(mn, (ll)(v.size() - mx) * mx2);
        }
        if (mn > v.size()) {
            cout << v.size() << endl;
        } else {
            cout << mn << endl;
        }
    }

}

