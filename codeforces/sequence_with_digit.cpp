#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;

ll solve(ll a){
	ll mx = -1, mn = 10; 
	while(a != 0){
		ll r = a % 10;
		mx = max(mx, r);
		mn = min(mn, r);
		a /= 10; 
	}
	return mx * mn;
}
signed main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr);

 int t;
 cin >> t;
 while(t--){
 	ll a, b;
 	cin >> a >> b;
 	while(--b){
 		ll ans = a + solve(a);
 		if(a == ans) break;
 		else a = ans;
 	}
 	cout << a << endl;
 }

 return 0;
}
