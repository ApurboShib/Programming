// #include <bits/stdc++.h>
// using namespace std;
// #define endl '\n'
// #define ll long long
// const int N = 1e5 + 9;
// vector<int>adj[N];
// bool vis[N];
// // check the graph has a cycle or not...

// bool cycle_detect(int node, int par = -1){
//     if(vis[node])return true;
//     vis[node] = true;
//     for(auto child : adj[node]){
//         if(child == par)continue;
//         if(cycle_detect(child, node))return true;
//     }
//     return false;

// }
// signed main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int n,e;
//     cin >> n >> e;
//     while(e--){
//         int a,b;
//         cin >> a >> b;
//         adj[a].push_back(b);
//         adj[b].push_back(a);
//     }
//     if(cycle_detect(1))cout << "CYCLE DETECTED" << endl;
//     else cout << "CYCLE  NOT DETECTED" << endl;
//     return 0;
// }

// solve it in different implementation..

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;
vector<int>adj[N];
bool vis[N];
bool isLoop = false;

bool dfs(int node, int par = -1){
    vis[node] = true;
    for(auto child : adj[node]){
        if(vis[child] and child == par)continue;
        if(vis[child]) return true;
        isLoop |= dfs(child, node);
    }
    return isLoop;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,e;
    cin >> n >> e;
    while(e--){
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    bool isLoop = false;
    for(int i=1; i<=n; i++){
        if(vis[i])continue;
        if(dfs(i));
        isLoop = true;
        break;
    }
    cout << isLoop << endl;

    return 0;
}
