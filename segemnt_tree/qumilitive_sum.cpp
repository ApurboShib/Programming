#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[n+1];
    for(int i = 1; i <=n; i++)cin >> a[i];
    int ans[n];
    ans[0] = 0;

    for(int i =1; i<=n; i++){
        ans[i] = ans[i-1] + a[i];

    }
    for(int i =1; i<=n; i++){
        cout << ans[i]<< ' ';
    }
    cout << endl;
    return 0;
}