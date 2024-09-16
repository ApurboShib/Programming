#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e8 + 9;
bool vis[N];


signed main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr);

 int n;
 cin >> n;

 for(int i = 1; i <= n; i++){
 	vis[i * i] = 1;
 }

 int cnt = 0;

 for(int a = 1; a <= n; a++){
 	for(int b = a; b <= n; b++){
 		int ans = (a * a) + (b * b);
 		if(ans > N) break;
 		if(vis[ans]){
 			cnt++;
 		}
 	}
 }
 cout << cnt << endl;

 return 0;
}