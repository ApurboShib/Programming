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
	int a[n], ans = 0;

	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

	sort(a, a + n);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			ans += ((a[j] - a[i]) * (1 << (j - i - 1)));
		}
	}

	cout << ans << endl;

	return 0;
}