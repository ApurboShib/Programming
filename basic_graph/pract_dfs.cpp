#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;

vector<int> g[N];
bool vis[N];

// void dfs(int node){
// 	if(!vis[node]){
// 		vis[node] = true;
// 		for(auto child : g[node]){
// 			cout << node << ' ' << child << endl;
// 			dfs(child);
// 		}
// 	}
// }

void dfs(int node, int par = -1){
	if(vis[node]) return;
	vis[node] = true;
	for(auto child : g[node]){
		if(child == par) continue;
		cout << node << ' ' << child << endl;
		dfs(child, node);
	}
}

signed main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr);

 int n, m;
 cin >> n >> m;
 while(m--){
 	int x, y;
 	cin >> x >> y;
 	g[x].push_back(y);
 	g[y].push_back(x);
 }
 dfs(1);

 return 0;
}