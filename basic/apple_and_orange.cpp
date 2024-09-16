#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;


signed main(){

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int s, t, a, b, n, m, d;
	cin >> s >> t >> a >> b >> m >> n;
	int ans1 = 0, ans2 = 0;

	for(int i = 0; i < m; i++){
		cin >> d;
		d+=a;
		if(d >= s and d<=t){
			ans1++;
		}
	}

	for(int i = 0; i < m; i++){
		cin >> d;
		d+=b;
		if(d >= s and d <= t){
			ans2++;
		}
	}

	cout << ans1 << endl;
	cout << ans2 << endl;

	

	return 0;
}