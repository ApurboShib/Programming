#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
const int N = 26; 

vector<char> adj[N];
bool vis[N];

void dfs(char node) {
    if (vis[node - 'A']) return;
    vis[node - 'A'] = true;
    for (auto child : adj[node - 'A']) {
        dfs(child);
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int e;
    cin >> e;

    while (e--) {
        char a, b;
        cin >> a >> b;
        adj[a - 'A'].push_back(b);
        adj[b - 'A'].push_back(a);
    }

    int cnt = 0;
    for (char i = 'A'; i <= 'E'; i++) {
        if (vis[i - 'A']) continue;
        else {
            dfs(i);
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}
