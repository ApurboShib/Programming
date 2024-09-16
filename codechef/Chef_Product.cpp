#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n % 2 == 1) {
            cout << 0 << ' ';
        } else {
            ll ans = 0;
            ll odd = n / 2;
            
            if (odd % 2 == 1)
                odd--;

            int left = 0, right = n - 1;

            while (left < right) {
                ans += (odd / 2);
                odd -= 2;
                left++;
                right--;
            }

            if (ans <= 2)
                cout << 1 << ' ';
            else
                cout << ans / 2;
        }

        cout << endl;
    }

    return 0;
}
