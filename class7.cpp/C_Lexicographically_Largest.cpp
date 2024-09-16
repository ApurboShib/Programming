#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
       set<int, greater<int>> s; 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<int> b(n);

        for (int i = n - 1; i >= 0; i--) {
            s.insert(a[i] + i + 1); 
            auto it = s.begin();
            b[i] = *it;
            s.erase(it); 
        }
        sort(b.rbegin(),b.rend());

        for (int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
