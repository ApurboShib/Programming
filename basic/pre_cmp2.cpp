#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;

int ans[N];
signed main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr);

 int n;
 cin >> n;
 int a[n];
 for(int i = 0; i < n; i++){
 	cin >> a[i];
 	ans[a[i]]++;
 }

 int q;
 cin >> q;
 while(q--){
 	int x; cin >> x;
 	cout << ans[x] << endl;
 }


 return 0;
}