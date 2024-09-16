#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;
vector<int> g[N];
ll w = 0, r = 0;
vector<int> colour(N);

void dfs(ll node, ll par, ll col){
    colour[node] = col;
    if(col & 1) w++;
    else r++;
  
    for(ll i = 0; i < g[node].size(); i++){
        ll v = g[node][i];
        if( v != par)
            dfs(v,node,!col);
        
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    for(ll i = 0; i < n - 1; i++){
        ll a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    dfs(1,-1,1);
    ll ans = 0;
    //cout << w << ' ' << r << endl;
    for(ll i = 1; i <= n; i++){
        if(colour[i] == 1) ans+= r - g[i].size();
        else ans+= w - g[i].size();
    }
    cout << (ans/2) << endl;
    return 0;
}
