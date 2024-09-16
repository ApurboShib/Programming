#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define endl '\n';
const int N = 5e6 + 7;

int phi[N + 2];
ull phiSum[N + 2];

void seivePhi() {
    for (int i = 2; i <= N; i++)
        phi[i] = i;
    for (int i = 2; i <= N; i++)
        if (phi[i] == i)
            for (int j = i; j <= N; j += i)
                phi[j] -= phi[j] / i;
}

int main() {
    seivePhi();
    phiSum[1] = 0;

    for (int i = 2; i <= N; i++)
        phiSum[i] = ((ull)phi[i] * (ull)phi[i]) + phiSum[i - 1];

    int t, tc = 1;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;
        ull x = phiSum[b] - phiSum[a - 1];
        cout << "Case " << tc++ << ": " << x << endl;
    }

    return 0;
}
