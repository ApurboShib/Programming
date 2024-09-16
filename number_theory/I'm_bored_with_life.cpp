#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll a,b;
	cin >> a >> b;
	int ans=1;
	for(int i=1; i<=min(a,b);i++){
		ans*=i;
	}
	cout << ans << endl;
	return 0;
}