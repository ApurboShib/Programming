#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<char> v(200, 'a');
        for (auto x : v) cout << x;
        cout << endl;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (v[x] == 'a') v[x] = 'b';
            else v[x] = 'a';
            for (auto x : v) cout << x;
            cout << endl;
        }
    }

    return 0;
}
