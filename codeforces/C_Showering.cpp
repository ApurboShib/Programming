#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
     int t;
    cin >> t;
    while (t--) {
        int n, s, m;
        cin >> n >> s >> m;
        vector<pair<int, int>> vp(n);
        for(int i = 0; i < n; i++) {
            cin >> vp[i].first >> vp[i].second;
        }
        bool f = false;
        if(vp[0].first >= s) {
            f = true;
        }
        //okk.
        for(int i = 1; i < n; i++) {
            if (vp[i].first - vp[i - 1].second >= s) {
                f = true;
            }
        }
        if(m - vp[n - 1].second >= s) {
            f = true;
        }

        if(f) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;

}

