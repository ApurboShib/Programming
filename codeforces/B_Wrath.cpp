#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;

void solve (vector<int> &v, int n) {
    vector<bool> ans(n,true);
    for(int i = 0; i < n; i++) {
        int l = max(0, i-v[i]);
        int r = i - 1;

        for(int i = l; i<=r; i++){
            ans[i] = false;
        }
    }
    int cnt = count(ans.begin(), ans.end(),true);
    cout << cnt << endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    solve(v,n);
    return 0;
}
