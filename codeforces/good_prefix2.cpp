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
 	ll n;
 	cin >> n;

 	vector<int> v(n);
 	for(int i = 0; i < n; i++) cin >> v[i];
 	int mx = INT_MIN;
 	ll sum = 0;
 	int cnt = 0;
 	for(int i = 0; i < n; i++){
 		sum += v[i];
 		mx = max(mx, v[i]);

 		if(sum == 2 * mx)cnt++;
 	}

 	cout << cnt << endl;

 }

 return 0;
}