// calculate the power of 2.
// 1 + 2^2 + 2^3 + 2^4 + 2^5+........
// formula is ((1 << (n + 1) - 1)).
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;
int cnt;
int pow2(int n){
	cnt++;
	if(n == 0)return 1;
	return pow2(n - 1) + pow2(n - 1);
}

signed main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr);
 int n;
 cin >> n;
 int ans = (1 << (n + 1) - 1);
 cout << "from reccursion approch : " << pow2(n) << endl;
 cout << "from formula : " << ans << endl;
 int a = pow2(n), b = ans;
 if(a == b) cout << "Same" << endl;
 else cout << "Bad luck" << endl;


 return 0;
}