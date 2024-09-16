#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9;
const int N = 101;
vector<vector<int> > adj(N);
vector<int> v(N, INF);

void bfs(int start) {
    queue<int> q;
    q.push(start);
    v[start] = 0;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (int child : adj[node]) {
            if (v[child] == INF) {
                v[child] = v[node] + 1;
                q.push(child);
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int a, b;
        cin >> a >> b;
        for (int j = 0; j < b; ++j) {
            int x;
            cin >> x;
            adj[a].push_back(x);
        }
    }

    bfs(1);

    for (int i = 1; i <= n; i++) {
        cout << i << " " << (v[i] == INF ? -1 : v[i]) << endl;
    }

    return 0;
}
