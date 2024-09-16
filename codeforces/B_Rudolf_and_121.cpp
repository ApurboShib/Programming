#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while(t--){

      ll n;
        cin >> n;

        ll v[n];
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
        }

        for (ll i = 1; i + 1 < n; i++) {
      
            ll mn1 = min(v[i - 1], v[i] / 2);
            ll mn2 = min(mn1,v[i + 1]);
            v[i - 1] -= mn1;
            v[i + 1] -= mn1;
            v[i] -= (2 * mn1);
        }

        bool f = true;
        for (int i = 0; i < n; i++) {
            if (v[i] != 0) {
                f = false;
                break;
            }
        }

        if (f) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
         return 0;
    }

   