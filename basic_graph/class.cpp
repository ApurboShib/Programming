#include <bits/stdc++.h>
// #include <boost/multiprecision/cpp_int.hpp>
 
// using namespace boost::multiprecision;
 
// #define int cpp_int
#define int long long
#define ull unsigned long long
#define EPS 1e-9
int cas = 0;
 
#define test_case \
  int t;          \
  cin >> t;       \
  while (t--)
 
#define print_case cout << "Case " << ++cas << ": "
#define mod (int) 1e9+7
const int N = 9e6+7;
const int INF = INT64_MAX;
using namespace std;

vector<int>adj[N];   
bool vis[N];

// void dfs(int node) {
//     if(vis[node]) return;
//     vis[node] = 1;
//     for(auto child: adj[node]) {  
//       cout << node << '-' << child<<'\n';
//       dfs(child);
//     }

// }

// void dfs(int node, int par = -1) {
//     for(auto child: adj[node]) {  
//       if(child == par) continue;  
//       cout << child << ' ' << node << '\n';
//       dfs(child, node);
//     }

// } 

bool cycle_detect(int node, int par = -1) { 
    int detected = 0; 
    vis[node] = 1;
    for(auto child: adj[node]) {
      if(vis[child] and child == par) continue; 
      if(vis[child]) return true;  
      detected |= cycle_detect(child, node);
      // if(cycle_detect(child, node)) return true;
    } 
    return detected;
}


void solve() {  
   int n, e; cin >> n >> e; 
   for(int i = 0; i < e; i++) {
    int a, b; cin >> a >> b;
    adj[a].push_back(b); 
    adj[b].push_back(a);
   } 
   cout << cycle_detect(1);

    
}
 
int32_t main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL), cout.tie(NULL);
// #ifndef ONLINE_JUDGE
//       freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
// #endif
  // test_case
  solve(),
      cout<<'\n';
  return 0;
}