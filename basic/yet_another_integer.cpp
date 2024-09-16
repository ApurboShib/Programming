#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;


signed main(){

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;
	while(t--){
		ll x, y;
		cin >> x >> y;

		ll tmp = abs (x - y); 
		cout << ((tmp + 9) / 10) << '\n';
	}
	

	return 0;
}