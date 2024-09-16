#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;


void solve(vector<char> &v) {
    int i = 0;
    int j = 1;
    int cnt = 0;
    while(i <= v.size()) {
        if(v[i] == '<' and v[j] == '>') {
            v.erase(v.begin() + i);
            cnt++;
            i++;
            j++;
        }


    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<char> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }

        solve(v);
    }

    return 0;
}
