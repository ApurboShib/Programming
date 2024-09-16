#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
const int N = 1e5 + 9;
int adj[N];

int check(int node) {
    if (node == adj[node]) {
        return node;
    }
    return adj[node] = check(adj[node]);
}
void solve(int a, int b) {
    a = check(a);
    b = check(b);
    if (a != b)
        adj[b] = a;
}
bool isOkay(int a, int b) {
    return check(a) == check(b);
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < N; i++) {
        adj[i] = i;
    }
    while (m--) {
        int a, b;
        cin >> a >> b;
        solve(a, b);
    }
    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        if (isOkay(l, r))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    return 0;
}
