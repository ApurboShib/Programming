#include <bits/stdc++.h>
using namespace std;

bool solve(vector<int> &v) {
    for (int i = 0; i < v.size() - 1; i++) {
        if (v[i] > v[i + 1]) {
            int cnt = v[i];
            while (cnt >= 10) {
                int dig = cnt % 10;
                cnt /= 10;
                v.insert(v.begin() + i, dig);
            }
            v.erase(v.begin() + i);
            return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
       // if(is_sorted(v.begin(),v.end())) cout << "YES" << endl;
        if(solve(v))cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
