#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int INF = INT_MAX;

void build_tree(vector<ll>& v, vector<ll>& tree, int start, int end, int node) {
    if (start == end) {
        tree[node] = v[start];
        return;
    }

    int mid = (start + end) / 2;
    build_tree(v, tree, start, mid, 2 * node);
    build_tree(v, tree, mid + 1, end, 2 * node + 1);

    tree[node] = min(tree[2 * node], tree[2 * node + 1]);
}

ll query_tree(vector<ll>& tree, int start, int end, int node, int left, int right) {
    if (left > end || right < start) {
        return INF;
    }

    if (left <= start && right >= end) {
        return tree[node];
    }

    int mid = (start + end) / 2;
    ll left_min = query_tree(tree, start, mid, 2 * node, left, right);
    ll right_min = query_tree(tree, mid + 1, end, 2 * node + 1, left, right);

    return min(left_min, right_min);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<ll> tree(4 * n);
    build_tree(v, tree, 0, n - 1, 1);

    while (q--) {
        int a, b;
        cin >> a >> b;
        cout << query_tree(tree, 0, n - 1, 1, a - 1, b - 1) << endl;
    }

    return 0;
}
