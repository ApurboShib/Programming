#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    vector<int> v;
    for (auto ch : s) {
        if (isdigit(ch)) {
            v.push_back(ch - '0'); 
        }
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
        if (i != v.size() - 1) {
            cout << '+';
        }
    }

    return 0;
}
