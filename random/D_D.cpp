#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ll = long long;

vector<ll> v, v1;

void d(ll n) {
    while (n % 2 == 0) {
        v.push_back(2);
        n /= 2;
    }
    for (ll i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            v.push_back(i);
            n /= i;
        }
    }
    if (n > 2) v.push_back(n);
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        v.clear();
        v1.clear();
        d(n);
        map<ll, ll> mp;
        ll mx = 0, mark = 0;

        for (int i = 0; i < v.size(); i++) {
            mp[v[i]]++;
            if (mp[v[i]] > mx) {
                mx = mp[v[i]];
                mark = v[i];
            }
        }

        if (mx == 1) {
            cout << 1 << endl;
            cout << n << endl;
        } else {
            for (int i = 0; i < mx - 1; i++)
                v1.push_back(mark);
            ll sum = 1;
            for (int i = 0; i < v.size(); i++) {
                if (v[i] != mark)
                    sum *= v[i];
            }
            sum *= mark;

            v1.push_back(sum);
            cout << v1.size() << endl;
            for (auto x : v1)
                cout << x << " ";
            cout << endl;
        }
    }

    return 0;
}
