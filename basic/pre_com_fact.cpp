#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;
ll fact[N];


signed main(){

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	fact[0] = fact[1] = 1;
	for(int i = 2; i < N; i++){
		fact[i] = (fact[i - 1] * i);
	}
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << fact[n] << endl;
	}

	return 0;
}