#include <bits/stdc++.h>
using namespace std;

#define MAXN 200005

vector<long long> tree(4 * MAXN, 0);
vector<long long> lazy(4 * MAXN, 0);
vector<long long> arr(MAXN, 0);

void build(int node, int start, int end) {
    if (start == end) {
        tree[node] = arr[start];
    } else {
        int mid = (start + end) / 2;
        build(2 * node, start, mid);
        build(2 * node + 1, mid + 1, end);
        tree[node] = tree[2 * node] + tree[2 * node + 1];
    }
}

void update(int node, int start, int end, int left, int right, long long val) {
    if (lazy[node] != 0) {
        tree[node] += (end - start + 1) * lazy[node];
        if (start != end) {
            lazy[2 * node] += lazy[node];
            lazy[2 * node + 1] += lazy[node];
        }
        lazy[node] = 0;
    }

    if (start > right || end < left) {
        return;
    }

    if (start >= left && end <= right) {
        tree[node] += (end - start + 1) * val;
        if (start != end) {
            lazy[2 * node] += val;
            lazy[2 * node + 1] += val;
        }
        return;
    }

    int mid = (start + end) / 2;
    update(2 * node, start, mid, left, right, val);
    update(2 * node + 1, mid + 1, end, left, right, val);
    tree[node] = tree[2 * node] + tree[2 * node + 1];
}

long long query(int node, int start, int end, int pos) {
    if (lazy[node] != 0) {
        tree[node] += (end - start + 1) * lazy[node];
        if (start != end) {
            lazy[2 * node] += lazy[node];
            lazy[2 * node + 1] += lazy[node];
        }
        lazy[node] = 0;
    }

    if (start == end) {
        return tree[node];
    }

    int mid = (start + end) / 2;
    if (pos <= mid) {
        return query(2 * node, start, mid, pos);
    } else {
        return query(2 * node + 1, mid + 1, end, pos);
    }
}

int main() {
    int n, q;
    cin >> n >> q;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    build(1, 0, n - 1);

    for (int i = 0; i < q; ++i) {
        int type;
        cin >> type;

        if (type == 1) {
            int a, b;
            long long u;
            cin >> a >> b >> u;
            update(1, 0, n - 1, a - 1, b - 1, u);
        } else {
            int k;
            cin >> k;
            cout << query(1, 0, n - 1, k - 1) << endl;
        }
    }

    return 0;
}
