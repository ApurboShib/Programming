#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;
vector<ll> primes(N, 0);

void sieve() {
    for (int i = 2; i < N; i++) {
        if (primes[i] == 0) {
            primes[i] = i;
            for (int j = i * 2; j < N; j += i) {
                if (primes[j] == 0) primes[j] = i;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    sieve();

    map<int, int> mp;
    while (n > 1) {
        ll p = primes[n];
        while (n % p == 0) {
            mp[p]++;
            n /= p;
        }
    }

    // Display prime factors and their respective powers
    for (auto x : mp) {
        cout << x.first << "^" << x.second << " ";
    }
    cout << endl;

    return 0;
}
