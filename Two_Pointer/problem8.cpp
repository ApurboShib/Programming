// another approch to solve problem 7.
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;

void solve(vector<int>& v) {
    sort(v.begin(), v.end());
    for (int i = v.size() - 1; i >= 0; i--) {
        int x = v[i];
        int l = 0;
        int r = i - 1;
        
        while (l <= r) {
            int sum = v[l] + v[r];
            if (sum == x) {
                cout << v[l] << ' ' << v[r] << ' ' << x << endl;
                return;
            }
            if (sum > x) {
                r--;
            } else {
                l++;
            }
        }
    }
    cout << "NO SUCH TRIPLETS" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        solve(v);
    }
    return 0;
}
