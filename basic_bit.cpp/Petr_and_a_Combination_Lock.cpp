#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;


signed main(){

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int a[n];

	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

	for(int mask = 0; mask < (1 << n); mask++){
		int rout = 0;
		for(int i = 0; i < n; i++){
			if(1 & (mask >> i)){
				rout += a[i];
			}
			else{
				rout -= a[i];
			}
			rout %= 360;
			rout = (rout + 360) % 360;
		}
		if(rout == 0){
			cout << "YES" << endl;
			return 0;
		}

	}
	cout << "NO" << endl;

	return 0;
}