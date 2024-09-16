#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans = "Timur";
    sort(s.begin(), s.end());
    sort(ans.begin(), ans.end());
    if(s==ans)cout << "YES" << endl;
    else cout << "NO" << endl;
    }

    return 0;
}
