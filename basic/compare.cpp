#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;

void solve(vector<int> &a, vector<int> &b, int &al, int &bob) {
    al = 0;
    bob = 0;
    for (int i = 0; i < 3; i++) {
        if (a[i] > b[i]) {
            al++;
        } else if (a[i] < b[i]) {
            bob++;
        }
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> a(3);
    vector<int> b(3);
    for (int i = 0; i < 3; i++) cin >> a[i];
    for (int i = 0; i < 3; i++) cin >> b[i];

    int al, bob;
    solve(a, b, al, bob);
    cout << al << ' ' << bob << endl;

    return 0;
}
