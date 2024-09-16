#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    cin >> s;
    
    int cnt = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '4' or s[i] == '7') {
            cnt++;
        }
    }
    
    //cout << cnt << endl;
    if (cnt == 4 or cnt == 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
