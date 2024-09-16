#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 1500;  
    vector<int> v(n);
    v[0] = 1;

    int x2 = 0, x3 = 0, x5 = 0;
    int mul2 = 2, mul3 = 3, mul5 = 5;

    for (int i = 1; i < n; i++) {
        int ans = min({mul2,mul3,mul5});
        v[i] = ans;

        if (ans == mul2) {
            x2++;
            mul2 = v[x2] * 2;
        }
        if (ans == mul3) {
            x3++;
            mul3 = v[x3] * 3;
        }
        if (ans == mul5) {
            x5++;
            mul5 = v[x5] * 5;
        }
    }

    cout << "The 1500'th ugly number is "<<v[n-1]<<'.' << endl;
    return 0;
}
