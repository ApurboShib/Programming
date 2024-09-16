#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'


void solve(int l, int r, int a[]) {
	if(l >= r) {
		return;
	}
	else{
		swap(a[l], a[r]);
		solve(l + 1, r - 1, a);
	}
}
int32_t main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int n;
   cin >> n;
   int a[n];
   for(int i = 0; i < n; i++) {
   	cin >> a[i];
   }
   solve(0, n - 1, a);
   for(auto x : a) cout << x << endl;

   
}