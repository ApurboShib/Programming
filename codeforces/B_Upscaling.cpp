#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int i = 0;
        while (i < n * 2) {
            int j = 0;
            while (j < n * 2) {
                if ((i / 2 + j / 2) % 2 == 0) {
                    cout << '#';
                } else {
                    cout << '.';
                }
                j++;
            }
            cout << endl;
            i++;
        }
    }
    return 0;
}


