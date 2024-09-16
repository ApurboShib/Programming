#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ull unsigned long long
const ull MAX = 9e6 + 7;
ull phi[MAX];
ull prefixSum[MAX];

void seivePHI() {
    for (ull i = 2; i <= MAX; i++) {
        if (phi[i] == 0) {
            phi[i] = i - 1;
            for (ull j = i * 2; j <= MAX; j += i) {
                if (phi[j] == 0)
                    phi[j] = j;
                phi[j] /= i;
                phi[j] *= (i - 1);
            }
        }
    }
}

void calculatePrefixSum() {
    prefixSum[1] = 0;
    for (ull i = 2; i <= MAX; i++)
        prefixSum[i] = ((ull)phi[i] * (ull)phi[i]) + prefixSum[i - 1];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    seivePHI();
    calculatePrefixSum();

    int t;
    cin >> t;
    int tc = 1;
    while (t--) {
        ull a, b;
        cin >> a >> b;

        ull ans = prefixSum[b] - prefixSum[a - 1];

        cout << "Case " << tc++ << ": " << ans << endl;
    }

    return 0;
}
