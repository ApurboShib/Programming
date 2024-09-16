#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> v;
    ll n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0){
            while (n % i == 0) {
                v.push_back(i);
                n /= i;
            }
        }
    }
    if (n > 1)
     v.push_back(n);
    sort(v.begin(), v.end());
    for (auto x : v){
        cout << x << ' ';
    }
    cout << endl;

    return 0;
}
