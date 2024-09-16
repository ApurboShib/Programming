#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;
vector<int>adj[N];
int subtree_sum[N];
int even_cnt[N];

void dfs(int node, int par = -1){

    if(node % 2 ==0) even_cnt[node]++; // for counting the even nodes.
    subtree_sum[node] += node;  // jodi value array thakto taile just, value[node] sum kortam.
    for(auto child : adj[node]){
        if(child == par) continue;
        dfs(child, node);
        subtree_sum[node] += subtree_sum[child]; // dfs sesh kore upor eh jouar somoy sum calc korbo.
        even_cnt[node] += even_cnt[child];
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i=0; i<n-1; i++){
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1);
    for(int i = 1; i<=n; i++){
        cout << subtree_sum[i] << ' ' << even_cnt[i] << endl;
    }
    // int q;
    // cin >> q;
    // // while(q--){
    // //     int v;
    // //     cin >> v;
    // //     cout << subtree_sum[v] << ' ' << even_cnt[v] << endl;
    // // }
    return 0;
}
