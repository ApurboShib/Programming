#include <bits/stdc++.h>
using namespace std;
set<int> s;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    int ts = 0;

    while (t--) {
        ts++;
        int n;
        cin >> n;

        s.clear(); 

        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                s.insert(i);
            }
        }

        cout << "Case " << ts << ":";

        for (auto d : s) {
            cout << " " << d;
        }

        cout << endl;
    }
    return 0;
}
