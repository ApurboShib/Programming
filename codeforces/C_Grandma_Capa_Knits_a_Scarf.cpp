#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;

void solve(string &s) {
    int ans = s.size()+1;

    for (char ch = 'a'; ch <= 'z'; ch++) {
        int cnt = 0; 
        int l = 0;
        int r = s.size() - 1;
        
        while (l <= r) {
            if (s[l] == s[r]) {
                l++;
                r--;
            } else if (s[l] == ch) {
                cnt++;
                l++;
            } else if (s[r] == ch) {
                cnt++;
                r--;
            } else {
                cnt = ans + 1;
                break;
            }
        }
        
        ans = min(ans, cnt);
    }
    if (ans > s.size()) {
        cout << "-1" << endl;
    } else {
        cout << ans << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        solve(s);
    }
    return 0;
}
