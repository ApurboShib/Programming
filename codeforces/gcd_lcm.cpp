#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int gcd = __gcd(a, b);
        int LCM = (a / gcd) * b;
        if (gcd == a && LCM == b) {
            cout << gcd << ' ' << LCM << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
