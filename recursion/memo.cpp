#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;

int memo[N];

int pow2(int n){
	if(n == 0) return 1;
	if(memo[n] != -1) return memo[n];

	memo[n] = pow2(n - 1) + pow2(n - 1);
	return memo[n];
}
signed main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr);

 int n;
 cin >> n;
 for(int i = 0; i <= n; i++){
 	memo[i] = -1;
 }
 cout << pow2(n) << endl;


 return 0;
}