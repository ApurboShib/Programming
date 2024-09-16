#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        if (k == 1) {
            cout << n << endl;
        } else if (k == 2) {
            int a = n - 1;
            int b = n - 2;

            cout << a << " " << b << endl;
        } else {
            cout << "2 ";
            for (int i = 0; i < k - 2; ++i) {
                cout << "2 ";
            }

            for (int i = n; i >= 3; --i) {
                cout << i << " ";
            }

            cout << endl;
        }
    }

    return 0;
}
