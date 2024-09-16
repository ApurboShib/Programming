#include <iostream>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    int oddPointer = 1, evenPointer = 2;

    while (k > 1) {
        if (oddPointer <= n) {
            oddPointer++;
            k--;
        }
        if (k > 1) {
            evenPointer += 2;
            k -= 2;
        }
    }

    cout << (oddPointer <= n ? oddPointer : evenPointer) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
