#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void build_tree(vector<ll>& v, vector<ll>& tree, int start, int end, int node) {
    if (start == end) {
        tree[node] = v[start];
        return;
    }

    int mid = (start + end) / 2;
    build_tree(v, tree, start, mid, 2 * node);
    build_tree(v, tree, mid + 1, end, 2 * node + 1);

    tree[node] = tree[2 * node] + tree[2 * node + 1];
}

ll query_tree(vector<ll>& tree, int start, int end, int node, int left, int right) {
    if (left > end || right < start) {
        return 0;
    }

    if (left <= start && right >= end) {
        return tree[node];
    }

    int mid = (start + end) / 2;
    ll leftSum = query_tree(tree, start, mid, 2 * node, left, right);
    ll rightSum = query_tree(tree, mid + 1, end, 2 * node + 1, left, right);

    return leftSum + rightSum;
}

void update_tree(vector<ll>& v, vector<ll>& tree, int start, int end, int node, int idx, int val) {
    if (start == end) {
        v[idx] = val;
        tree[node] = val;
        return;
    }

    int mid = (start + end) / 2;
    if (idx <= mid) {
        update_tree(v, tree, start, mid, 2 * node, idx, val);
    } else {
        update_tree(v, tree, mid + 1, end, 2 * node + 1, idx, val);
    }

    tree[node] = tree[2 * node] + tree[2 * node + 1];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<ll> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    vector<ll> tree(4 * n);

    build_tree(v, tree, 0, n - 1, 1);

    while (q--) {
        int tp;
        cin >> tp;

        if (tp == 1) {
            int k, u;
            cin >> k >> u;
            update_tree(v, tree, 0, n - 1, 1, k - 1, u);
        } else if (tp == 2) {
            int a, b;
            cin >> a >> b;
            long long result = query_tree(tree, 0, n - 1, 1, a - 1, b - 1);
            cout << result << endl;
        }
    }

    return 0;
}
