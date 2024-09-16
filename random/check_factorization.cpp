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
    vector<int> spf(N, -1);

    for(int i = 2; i < N; i++) {
        if(spf[i] == -1) {
            for(int j = i; j < N; j+=i) {
                if(spf[j] == -1) {
                    spf[j] = i;
                }
            }
        }
    }
    while(n > 1) {
        cout << spf[n] << ' ';
        n/= spf[n];
    }

    return 0;
}
