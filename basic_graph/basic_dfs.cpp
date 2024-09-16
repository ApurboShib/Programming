// basic dfs..

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;
vector<int> g[N];
bool vis[N];

void dfs(int node){
	if(vis[node]) return;
	vis[node] = true;

	for(auto child : g[node]){
		cout << node << "->" << child << endl;
		dfs(child);
	}
}

signed main(){

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;
	while(m--){
		int a, b;
		cin >> a >> b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	dfs(1);

	return 0;
}