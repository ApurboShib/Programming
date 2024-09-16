// 1D prefix sum..
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;


signed main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr);

 int n;
 cin >> n;
 int a[n];
 for(int i = 0; i < n; i++){
 	cin >> a[i];
 }

 vector<int> pref(n,0);
 for(int i = 1; i <= n; i++){
 	pref[i] = pref[i - 1] + a[i];
 }

 int q;
 cin >> q;
 while(q--){
 	int l, r;
 	cin >> l >> r;
 	cout << pref[r] - pref[l - 1] << endl;
 }

 return 0;
}