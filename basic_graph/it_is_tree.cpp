// #include <bits/stdc++.h>
// using namespace std;
// #define endl '\n'
// #define ll long long
// const int MOD = 1e9 + 7;
// const int N = 1e5 + 9;
// vector<int> g[N];
// bool vis[N];

// bool check(int node, int par = -1){
//     if(vis[node]) return true;
//     vis[node] = true;
//     for(auto child : g[node]) {
//         if(child == par) continue;
//         if(check(child, node)) return true;
//     }
//     return false;
// }

// signed main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n, m;
//     cin >> n >> m;
    
//     memset(vis, false, sizeof(vis));

//     while(m--){
//         int a, b;
//         cin >> a >> b;
//         g[a].push_back(b);
//         g[b].push_back(a);
//     }
//     bool f = false;
//     for(int i = 1; i <= n; i++){
//         if(!vis[i]) {
//             if(check(i)){
//                 f = true;
//                 break;
//             }
//         }
//     }
//     if(f)
//         cout << "YES" << endl;
//     else
//         cout << "NO" << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;
vector<int> g[N];
bool vis[N];

void dfs(int node) {
    if (vis[node]) return;
    vis[node] = true;
    for (auto child : g[node]) {
        dfs(child);
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    
    if (m != n-1) { 
        cout << "NO" << endl;
        return 0;
    }

    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

 
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            dfs(i);
            cnt++;
        }
    }
    
    if (cnt == 1) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}

