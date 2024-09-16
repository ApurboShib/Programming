#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;


signed main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr);

 int n, k, l, c, d, p, nl, np;
 cin >> n >> k >> l >> c >> d >> p >> nl >> np;
 int x = k * l;
 int y = c * d;
 int z = x/(n * nl);
 int ans = y/n;
 int res = p/ (n * np);
 int mn = min({z, ans, res});
 cout << mn << endl;
 return 0;
}