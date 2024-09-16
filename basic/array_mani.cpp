#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;
int arr[N];


signed main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr);

 int n, q;
 cin >> n >> q;
 while(q--){
 	int a, b, c;
 	cin >> a >> b >> c;
 	arr[a] += c;
 	arr[b + 1] -= c;
 }

 	for(int i = 1; i <= n; i++){
 		arr[i] += arr[i - 1];
 	}

 	int mx = -1;
 	for(int i = 1; i <= n; i++){
 		mx = max(mx, arr[i]);
 	}
 	cout << mx << endl;

 

 return 0;
}