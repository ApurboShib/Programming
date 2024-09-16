#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1007; 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    
    while (t--) {
        ll n;
        cin >> n;
        ll a[N][N]; 
        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < n; j++) {
                if (i == j || i + j == n - 1) {
                    a[i][j] = 1;
                } else {
                    a[i][j] = 0;
                }
            }
        }
        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < n; j++) {
                cout << a[i][j] << ' ';
            }
            cout << endl;
        }
    }
    return 0;
}
