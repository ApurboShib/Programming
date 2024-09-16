#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<int> c(n + 1), prefix_sum(n + 1, 0);

        for (int i = 1; i <= n; ++i) {
            cin >> c[i];
            prefix_sum[i] = prefix_sum[i - 1] + c[i];
        }

        while (q--) {
            int l, r;
            cin >> l >> r;

            int sum = prefix_sum[r] - prefix_sum[l - 1];
            int mid = (r + l) / 2;

            if (sum % 2 == 0 && sum / 2 >= prefix_sum[mid - 1] && sum / 2 <= prefix_sum[mid]) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
