#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll ong long
const int N = 1e5+9;
int a[N];
int tree[N*4];

void build_tree(ll node, ll begin, ll end){
    if(begin == end){
        tree[node] = tree[begin];
    }
    int left = 2 * node, right = 2 * node + 1;
    int mid = (left + right)/2;
    build_tree(left,begin, mid);
    build_tree(right, mid+1, end);

    tree[node] = tree[left] + tree[right];
}

void update_tree(ll node, ll begin, ll end, ll indx, ll value){
    if(begin > indx or end < indx){
        return;
    }
    if(begin == end and begin == indx){
        tree[node] = value;
        return;
    }
    int left = 2 * node, right = 2 * node + 1;
    int mid = (left + right)/2;
    update_tree(left,begin,mid,indx,value);
    update_tree(right, mid+1, end, indx, value);

    tree[node] = tree[left] + tree[right];
}

int query_tree(ll node, int begin, int end, ll l, ll r){
    if(begin > r or end < l)return 0;
    if(begin >= l and end <= r){
        return tree[node];
    }
    int left = 2 * node, right = 2 * node + 1;
    int mid = (left + right)/2;
    return query_tree(left, begin, mid, l,r) + query_tree(right, mid+1, end, l,r);
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,q;
    cin >> n >> q;
    for(int i=1; i<=N; i++){
        cin >> a[i];
    }
    build_query(1,1,n);
    while(q--){
        int tp;
        cin >> tp;
        if(tp==1){
            int a,b;
            cin >> a >> b;
            update_tree(1,1,n,a,b);
        }
        else{
            query_tree(1,1)

        }
    }

    return 0;
}
