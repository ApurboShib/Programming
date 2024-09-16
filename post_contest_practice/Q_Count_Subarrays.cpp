#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n + 1);

        for (int i = 1; i <= n; i++) {
            cin >> v[i];
        }

        int cnt = 0;

        for (int l = 1; l <= n; l++) {
            for (int r = l; r <= n; r++) {
                bool flag = true; 
                for (int i = l; i < r; i++) {
                    if (v[i] > v[i + 1]) {
                        flag = false;
                        break;
                    }
                }
                if (flag) {
                    cnt++;
                }
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
