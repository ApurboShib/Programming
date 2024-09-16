#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;
int solve(int x1, int x2, int x3) {
  
    vector<int> v = {x1, x2, x3};
    sort(v.begin(), v.end());
    int a = v[1];
    int dis = abs(v[0] - a) + abs(v[1] - a) + abs(v[2] - a);
    return dis;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while (t--) {
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;
        cout << solve(x1, x2, x3) << endl;
    }

    return 0;
}
