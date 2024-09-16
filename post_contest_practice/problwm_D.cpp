#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int cnt = 0;
    int mx = INT_MIN;
    for(int i=0; i<n; i++){
        mx = max(mx, a[i]);

    }
    for(int i=0; i<n; i++){
        if(a[i]>a[i+1])cnt++;
    }
    //cout << mx << ' ' << cnt << endl;
    int ans = mx-a[0]-cnt;
    if(a[0]>mx){
        cout << a[0] << endl;
    }
    else{
        cout << ans << endl;
    }

    return 0;
}
