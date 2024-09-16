#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;

int divCnt(int n){
	int cnt = 0;
	for(int i = 1; i * i <= n; i++){
		if(n % i == 0){
			if(i == n/i)cnt++;
			else cnt+=2;
		}
	}
	return cnt;
}
signed main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr);
int a, b, n;
cin >> a >> b >> n;
int ans = 0;
for(int i = a; i <= b; i++){
	if(divCnt(i) == n)ans++;
}

cout << ans << endl;
 

 return 0;
}