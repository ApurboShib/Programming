#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define endl '\n'

int digitSum(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10; 
        n /= 10;       
    }
    return sum;
}

vector<ll> pref(int n) {
    vector<ll> v(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        ll x = digitSum(i);
        v[i] = x;
    }

    ll sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += v[i];
        v[i] = sum;
    }

    return v;
}

void solve(const vector<ll>& v, int t) {
    while (t--) {
        int n;
        cin >> n;
        cout << v[n] << endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 200007;
    vector<ll> v = pref(n);

    int t;
    cin >> t;

    solve(v, t);

    return 0;
}
