#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(string &s, int a, int b) {
    int n = a + b;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') a--;
        if (s[i] == '1') b--;
    }
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        if (s[i] == '?' && s[j] == '?') continue;

        if (s[i] != '?') {
            if (s[j] == '?') {
                s[j] = s[i];
                if (s[i] == '0') a--;
                else b--;
            }
        } else if (s[j] != '?') {
            s[i] = s[j];
            if (s[j] == '0') a--;
            else b--;
        }
    }
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        if (s[i] == '?' && s[j] == '?') {
            if (a >= 2) {
                s[i] = s[j] = '0';
                a -= 2;
            } else if (b >= 2) {
                s[i] = s[j] = '1';
                b -= 2;
            }
        }
    }
    if (n & 1) {
        int mid = n / 2;
        if (s[mid] == '?') {
            if (a > 0) {
                s[mid] = '0';
                a--;
            } else if (b > 0) {
                s[mid] = '1';
                b--;
            }
        }
    }
    bool f = true;
    for (int i = 0; i < n; i++) {
        if (s[i] == '?') {
            f = false;
            break;
        }
    }

    for (int i = 0, j = n - 1; i < j; i++, j--) {
        if (s[i] != s[j]) {
            f = false;
            break;
        }
    }

    if (a != 0 || b != 0) cout << -1 << endl;
    else {
        if (f) cout << s << endl;
        else cout << -1 << endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int a, b;
        string s;
        cin >> a >> b >> s;

        solve(s, a, b);
    }

    return 0;
}
