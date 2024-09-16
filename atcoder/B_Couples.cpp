#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(2 * n);
    for(int i = 0; i < 2 * n; i++) {
        cin >> v[i];
    }

    int cnt = 0;
    for(int i = 0; i < 2 * n - 2; i++) {
        if(v[i] == v[i + 2]) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
