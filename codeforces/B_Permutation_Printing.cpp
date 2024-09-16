#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define endl '\n'

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> v;

        for (int i = 1; i <= n; ++i) {
            v.push_back(i);
        }

        if (n % 2 == 0) {
            for (int i = 0; i < n / 2; i++) {
                cout << v[n - i - 1] << " " << v[i] << " ";
            }
        } else {
            for (int i = 0; i < n / 2; i++) {
                cout << v[n - i - 1] << " " << v[i] << " ";
            }
            cout << v[n / 2] << " ";
        }

        cout << endl;
    }

    return 0;
}
