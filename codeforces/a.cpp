#include<bits/stdc++.h>
using namespace std;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 2 ) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            string ans;
            for (int i = 0; i < n / 2; i++) {
                char x = 'A' + i;
                ans += x;
                ans += x;
            }
            cout << ans << endl;
        }
    }

    return 0;
}
