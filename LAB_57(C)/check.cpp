// Adjacency Matrix
#include<bits/stdc++.h>
using namespace std;

const int N = 105;
int g[N][N];
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m;
  while (m--) {
    int u, v; cin >> u >> v;
    g[u][v] = 1;
    g[v][u] = 1;
  }
  if (g[4][2]) {
    cout << "YES\n";
  }
  else {
    cout << "NO\n";
  }
  return 0;
}
// Adjacency List
#include<bits/stdc++.h>
using namespace std;

const int N = 105;
vector<int> g[N];
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m;
  while (m--) {
    int u, v; cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  for (auto v: g[2]) {
    cout << v << '\n';
  }
  // degrees
  for (int i = 1; i <= n; i++) {
    cout << g[i].size() << ' ';
  }
  cout << '\n';
  return 0;
}
// DFS
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
vector<int> g[N];
bool vis[N];

void dfs(int u) {
  vis[u] = true;
  for (auto v: g[u]) {
    if (!vis[v]) {
      dfs(v);
    }
  }
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m;
  while (m--) {
    int u, v; cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  // dfs(1);
  // for (int i = 1; i <= n; i++) {
  //   if (!vis[i]) {
  //     cout << "Disconnected Graph\n";
  //     return 0;
  //   }
  // }
  // cout << "Connected Graph\n";
  int ans = 0;
  for (int i = 1; i <= n; i++) {
    if (!vis[i]) {
      dfs(i);
      ++ans;
    }
  }
  cout << "Connected Components = " << ans << '\n';
  return 0;
}
// BFS
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
vector<int> g[N];
bool vis[N]; int dis[N], par[N];

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m;
  while (m--) {
    int u, v; cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  queue<int> q;
  q.push(1); vis[1] = true; dis[1] = 0;
  while (!q.empty()) {
    int u = q.front();
    q.pop();
    for (auto v: g[u]) {
      if (!vis[v]) {
        q.push(v);
        par[v] = u;
        dis[v] = dis[u] + 1;
        vis[v] = true;
      }
    }
  }
  for (int i = 1; i <= n; i++) {
    cout << dis[i] << ' ';
  }
  cout << '\n';
  int v = 4;
  while (v != 1) {
    cout << v << ' ';
    v = par[v];
  }
  cout << 1 << '\n';
}
// Bicoloring and Bipartite Graphs.
#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
vector<int> g[N];
bool vis[N]; int col[N];
bool ok;

void dfs(int u) {
  vis[u] = true;
  for (auto v: g[u]) {
    if (!vis[v]) {
      col[v] = col[u] ^ 1;
      dfs(v);
    }
    else {
      if (col[u] == col[v]) {
        ok = false;
      }
    }
  }
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m;
  while (m--) {
    int u, v; cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  ok = true;
  for (int i = 1; i <= n; i++) {
    if (!vis[i]) dfs(i);
  }
  if (ok) {
    cout << "YES\n";
  }
  else {
    cout << "NO\n";
  }
}
// Finding A Cycle.
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
vector<int> g[N];
int col[N], par[N];
bool cycle;
void dfs(int u) {
  col[u] = 1;
  for (auto v: g[u]) {
    if (col[v] == 0) {
      par[v] = u;
      dfs(v);
    }
    else if (col[v] == 1) {
      cycle = true;
      // you can track the cycle using par array
    }
  }
  col[u] = 2;
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m;
  for (int i = 1; i <= m; i++) {
    int u, v; cin >> u >> v;
    g[u].push_back(v);
  }
  cycle = false;
  for (int i = 1; i <= n; i++) {
    if (col[i] == 0) dfs(i);
  }
  cout << (cycle ? "YES\n" : "NO\n") << '\n';
  return 0;
}
// Topological Sorting.
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
int indeg[N];
vector<int> g[N];
bool vis[N];
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m;
  while (m--) {
    int u, v; cin >> u >> v;
    indeg[v]++;
    g[u].push_back(v);
  }
  vector<int> ans;
  while (ans.size() < n) {
    int cur = 0;
    for (int i = 1; i <= n; i++) {
      if (!vis[i] and indeg[i] == 0) {
        cur = i;
        break;
      }
    }
    if (cur == 0) {
      cout << "IMPOSSIBLE\n";
      return 0;
    }
    vis[cur] = true;
    ans.push_back(cur);
    for (auto v: g[cur]) {
      indeg[v]--;
    }
  }
  for (auto x: ans) cout << x << ' ';
  return 0;
}
// using dfs
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
int indeg[N];
vector<int> g[N];
bool vis[N];
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m;
  while (m--) {
    int u, v; cin >> u >> v;
    indeg[v]++;
    g[u].push_back(v);
  }
  vector<int> ans;
  while (ans.size() < n) {
    int cur = 0;
    for (int i = 1; i <= n; i++) {
      if (!vis[i] and indeg[i] == 0) {
        cur = i;
        break;
      }
    }
    if (cur == 0) {
      cout << "IMPOSSIBLE\n";
      return 0;
    }
    vis[cur] = true;
    ans.push_back(cur);
    for (auto v: g[cur]) {
      indeg[v]--;
    }
  }
  for (auto x: ans) cout << x << ' ';
  return 0;
}
// Trees.
#include<bits/stdc++.h>
using namespace std;

vector<int> g[105];
int dep[105];
void dfs(int u, int p) {
  dep[u] = dep[p] + 1;
  for (auto v: g[u]) {
    if (v != p) {
      dfs(v, u);
    }
  }
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  for (int i = 1; i < n; i++) {
    int u, v; cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  dfs(1, 0);
  for (int i = 1; i <= n; i++) {
    cout << dep[i] << ' ';
  }
  return 0;
}
// Diameter of a Tree.
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
vector<int> g[N];
int dep[N];
int mx, node, ans;
void dfs1(int u, int p) {
  dep[u] = dep[p] + 1;
  if (dep[u] > mx) {
    mx = dep[u];
    node = u;
  }
  for (auto v: g[u]) {
    if (v != p) {
      dfs1(v, u);
    }
  }
}
void dfs2(int u, int p) {
  dep[u] = dep[p] + 1;
  ans = max(ans, dep[u] - 1);
  for (auto v: g[u]) {
    if (v != p) {
      dfs2(v, u);
    }
  }
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  for (int i = 1; i < n; i++) {
    int u, v; cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  dfs1(1, 0);
  dfs2(node, 0);
  cout << ans << '\n';
  return 0;
}
// 