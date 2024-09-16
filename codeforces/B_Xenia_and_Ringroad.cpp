#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   ll n, m, cur = 1, ans = 0;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        ll a;
        cin >> a;
        if (a >= cur) {
            ans += a - cur;
        } else {
            ans += n - cur + a;
        }
        cur = a;
    }

    cout << ans << endl;

}

