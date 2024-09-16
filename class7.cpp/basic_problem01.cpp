// ekta array thakle N length er, and q ta query thake and l,r, thakbe range jar protita range eh x add kora lagbe.
// brouthforce soln:

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;
int a[N],d[N],p[N];
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,q;
    cin >> n >> q;
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    while(q--){
        int l,r,x;
        cin >> l >> r >> x;
        for(int i = l; i<=r; i++){
            a[i]+=x;

        }
    }
    for(int i = 1; i<=n; i++){
        cout << a[i] << ' ';
    }
    cout << endl;
    return 0;
}
