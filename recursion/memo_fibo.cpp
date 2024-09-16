#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;

int memo[100];

int fibo(int n){
	if(n <= 1) return n;
	if(memo[n] != -1) return memo[n];

	memo[n] = fibo(n - 1) + fibo(n - 2);
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
 cout << fibo(n) << endl;

 return 0;
}