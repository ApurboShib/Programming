#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;
ll a[N],d[N];
int l[N],r[N],x[N],ops[N];
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,k;
    cin >> n >> m >> k;
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    for(int i=1; i<=m; i++){
        cin >> l[i] >> r[i] >> x[i];
    }
    for(int i=1; i<=k; i++){
        int l,r;
        cin >> l >> r;
        ops[l]++;
        ops[r+1]--;
    }
    for(int i=1; i<=m; i++){
        ops[i]+=ops[i-1];
    }
    for(int i=1; i<=n; i++){
        d[i] = a[i] - a[i-1];
    }
    for(int i=1; i<=m; i++){
        d[l[i]]+=  1LL * ops[i] * x[i];
        d[r[i]+1]-= 1LL * ops[i] * x[i];
    }
    for(int i=1; i<=n; i++){
        ops[i] = ops[i-1] + d[i];
    }
    for(int i=1; i<=n; i++){
        cout << ops[i]<<' ';
    }
    cout << endl;

    return 0;
}
