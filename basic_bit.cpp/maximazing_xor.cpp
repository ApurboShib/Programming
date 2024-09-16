#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;


signed main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr);

 int l, r;
 cin >> l >> r;
 int mx = -1;
 for(int i = l; i <= r; i++){
 	for(int j = i; j <= r; j++){
 		mx = max(mx, i ^ j);
 	}
 }
 cout << mx << endl;

 return 0;
}