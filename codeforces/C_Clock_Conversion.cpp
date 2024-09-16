#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        
        int x = stoi(s.substr(0, 2));
        string ans = s.substr(3, 2);
        string sft = "AM\n";
        
        if (x > 11) {
            sft = "PM\n";
        }
        
        if (x == 0 or x == 12) {
            cout << 12 << ":" << ans << " " << sft;
        } else {
            if (x % 12 < 10) {
                cout << 0;
            }
            cout << x % 12 << ":" << ans << " " << sft;
        }
    }
    return 0;
}
