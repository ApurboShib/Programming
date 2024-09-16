#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        char s[n][n];
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < n; ++j) {
                cin >> s[i][j];
            }
        }

        vector<int> v;
        int cnt = 0;

        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < n; ++j) {
                if(s[i][j] == '1') {
                    cnt++;
                }
            }
            if(cnt > 0) {
                v.push_back(cnt);
                cnt = 0;
            }
        }

        int sz = 1;
        for (int i = 1; i < v.size(); ++i) {
            if (v[i] != v[i - 1]) {
                v[sz++] = v[i];
            }
        }
        v.resize(sz);

        if (v.size() != 1) {
            cout << "TRIANGLE" << endl;
        } else {
            cout << "SQUARE" << endl;
        }
    }

    return 0;
}
