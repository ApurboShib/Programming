#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
            cin >> v[i];

        int a = 1e9, b = 1e9, cnt = 0;
        for (auto &i : v) {
            cin >> i;
            if (a > b) {
                swap(a, b);
            }
            if (i <= a)
                a = i;
            else if (i <= b)
                b = i;
            else
                a = i, cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}
