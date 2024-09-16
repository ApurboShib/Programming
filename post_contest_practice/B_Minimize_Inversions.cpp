#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        vector<pair<int, int>> vp;
        for (int i = 0; i < n; i++)
            vp.push_back({a[i], b[i]});

        sort(vp.begin(), vp.end());

        for (auto i : vp)
            cout << i.first << ' ';
        cout << '\n';

        for (auto i : vp)
            cout << i.second << ' ';
        cout << '\n';
    }

    return 0;
}
