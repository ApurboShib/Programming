#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--) {
        int sz1, sz2;
        cin >> sz1 >> sz2;
        string s1, s2;
        cin >> s1 >> s2;
        bool pos = true;

        if (s1.find(s2) != string::npos) {
            cout << 0 << endl;
        } else {
            int i;
            for (i = 1; i <= 6; i++) {
                s1 += s1;
                if (s1.find(s2) != string::npos) {
                    cout << i << endl;
                    pos = false;
                    break;
                }
            }

            if (pos) {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}
