#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;
int a[N],d[N],p[N];
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    for(int i = 1; i<=n ; i++){
        cin >> a[i];
    }
    // calculate the difference array.
    for(int i = 1; i<=n; i++){
        d[i] = a[i] - a[i-1];
    }
    while(q--){
        int l , r ,x;
        cin >> l >> r >> x;
        d[l]+=x;
        d[r+1]-=x;
    }
    // now we back to the main array with help of prefix sum.
    for(int i=1; i<=n; i++){
        p[i] = p[i-1] + d[i];
    }
    for(int i = 1; i<=n; i++){
        cout << p[i] << ' ';
    }
    cout << endl;
    return 0;
}
