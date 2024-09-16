#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 1e5 + 9;
const int INF = INT_MAX;

vector<int> a(N);
vector<int> tree(4 * N);

void build_tree(int node, int begin, int end) {
    if (begin == end) {
        tree[node] = a[begin];
    } else {
        int left = 2 * node, right = 2 * node + 1;
        int mid = (begin + end) / 2;
        build_tree(left, begin, mid);
        build_tree(right, mid + 1, end);
        tree[node] = min(tree[left], tree[right]);
    }
}

void update_tree(int node, int begin, int end, int indx, int value) {
    if (begin > indx || end < indx) {
        return;
    }
    if (begin == end && begin == indx) {
        tree[node] = value;
        return;
    }
    int left = 2 * node, right = 2 * node + 1;
    int mid = (begin + end) / 2;
    update_tree(left, begin, mid, indx, value);
    update_tree(right, mid + 1, end, indx, value);
    tree[node] = min(tree[left], tree[right]);
}

int query_tree(int node, int begin, int end, int l, int r) {
    if (begin > r || end < l) return INF;
    if (begin >= l && end <= r) {
        return tree[node];
    }
    int left = 2 * node, right = 2 * node + 1;
    int mid = (begin + end) / 2;
    return min(query_tree(left, begin, mid, l, r), query_tree(right, mid + 1, end, l, r));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    build_tree(1, 0, n - 1);

    while (q--) {
        int tp;
        cin >> tp;

        if (tp == 1) {
            int i, v;
            cin >> i >> v;
            update_tree(1, 0, n - 1, i, v);
        } else  {
            int l, r;
            cin >> l >> r;
            cout << query_tree(1, 0, n - 1, l, r - 1)<<endl;
           
        }
    }

    return 0;
}
