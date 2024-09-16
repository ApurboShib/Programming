#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;
vector<int>adj[N];
vector<vector<int> > cc;
bool vis[N];
vector<int> curr;

void dfs(int node){
    if(vis[node])return;
    vis[node] = true;
    curr.push_back(node);
    for(auto child : adj[node]){
        dfs(child);
    }
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

    for(int i = 1; i<=n; i++){
        if(vis[i])continue;
        curr.clear();
        dfs(i);
        cc.push_back(curr);
    }
    cout << cc.size() << endl;
    for(auto curr : cc){
        for(auto vertix : curr){
            cout << vertix << ' ';
        }
        cout << endl;
    }
    return 0;
}
