#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;


int d[N];

void sieve() {
    for (int i = 1; i < N; i++) {
        for (int j = i; j < N; j += i) {
            d[j]++;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();

    int t;
    int tc = 1;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        cout<< "Case " << tc++<< ": " << (d[n] - 1) << endl;
    }

    return 0;
}
