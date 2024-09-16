#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;
vector<int> g[N];
vector<int> even_cnt(N,0);
vector<int> subtree_sum(N,0);

void dfs(int node, int par = -1) {
    if(node % 2 == 0)even_cnt[node]++;
    subtree_sum[node]+= node;
    for(auto child : g[node]) {
        if(child == par) continue;
        dfs(child, node);
        subtree_sum[node]+= subtree_sum[child];
        even_cnt[node]+= even_cnt[child];
    }

}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for(int i = 0; i < n - 1; i++) {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(1);
    for(int i = 1; i <= n; i++) {
        cout << subtree_sum[i] << ' ' << even_cnt[i] << endl;
    }
    return 0;
}
