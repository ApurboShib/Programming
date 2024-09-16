#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;

int dp[N];

int sum(int n){
	if(n == 0) return 0;
	if(dp[n] != -1) return dp[n];
	dp[n] = n + sum(n - 1);
	return dp[n];
}
signed main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr);

 int n;
 cin >> n;
 for(int i = 0; i <= n; i++){
 	dp[i] = -1;
 }
 cout << sum(n) << endl;

 return 0;
}