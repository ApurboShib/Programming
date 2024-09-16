#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;
int solve (int p, int q){
	if(q == 0) return 1;
	return p * solve(p, q - 1);
}

signed main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr);

 int p, q;
 cin >> p >> q;
 cout << solve(p , q) << endl;

 return 0;
}