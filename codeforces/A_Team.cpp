#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n, p, v, t, cnt = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> p >> v >> t;
        if (p + v + t >= 2) {
            cnt++;
        }
    }

    cout << cnt << endl;

}

