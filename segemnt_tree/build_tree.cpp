// segmet tree.
// build tree..

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 1e6 + 9;
int a[N];
int tree[N*4];
// build_tree fubction...
void build_tree(int node, int begin, int end){
    if(begin == end){
        tree[node] = tree[begin];
        return;
    }
    int left = 2 * node;
    int right = 2 * node + 1;
    int mid = (left + right)/2;
    build_tree(left,begin, mid);
    build_tree(right,mid+1,end);
    tree[node] = tree[left] + tree[right];
}
// build the query function...

int query_tree(int node, int begin, int end, int l, int r){
    if(begin > r or end < l){ // check korbo je range ta ekdom baire kina, taile just return 0 kore dibo.
        return 0;
    }
    if(begin >= l && end <= r){ // check korbo je range ta ekdom bitore kina, taile just oi node ta 
        return tree[node];
    }
    int left = 2 * node, right = 2 * node + 1;
    int mid = (left + right)/2;
    return query_tree(left,begin,mid,l,r) + query_tree(right, mid+1,end, l, r);
}
// update tree function.

void update_tree(int node, int begin, int end, int indx, int value){
    if(begin > indx or end < indx){
        return;
    }
    if(begin == end && begin == indx){
        tree[node] = value;
    }
    int left = 2 * node, right = 2 * node + 1;
    int mid = (left + right) / 2;
    update_tree(left,begin,mid,indx,value);
    update_tree(right,mid+1,end,indx,value);
    tree[node] = tree[left] + tree[right];
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    
    for(int i=1; i<=n; i++){ 
        cin >> a[i];
    }
    build_tree(1,1,n);

    return 0;
}
