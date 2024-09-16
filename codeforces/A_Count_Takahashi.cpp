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
    int cnt = 0;
    while(t--) {
        string s;
        cin >> s;
        if(s == "Takahashi") {
            cnt++;
        }
       // cout << cnt << endl;
    }
    cout << cnt << endl;
    return 0;
}
