#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;

vector<int>adj[N];
vector<int> dep(N);
vector<int>heights(N);

void dfs(int node, int par = -1) {
    for (auto child : adj[node]) {
        if (child == par) continue;
        dep[child] = dep[node] + 1;
        dfs(child, node);
        heights[node] = max(heights[node], heights[child]+1);
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
  adj[a].push_back(b);
  adj[b].push_back(a);
 }

 dfs(1);
 for(int i = 1; i <= n; i++){
  cout << dep[i] << ' ' << heights[i] << endl;
 }
 

 return 0;
}