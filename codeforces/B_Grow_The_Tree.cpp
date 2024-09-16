#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    vector<ll>v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    ll h = 0;
    ll ver = 0;
    sort(v.begin(), v.end());
    for(int i=0; i<n/2; i++){
        h+=v[i];
    }
    for(int i = n/2; i<n; i++){
        ver+=v[i];
    }
    cout << (h*h+ver*ver)<<endl;
    return 0;
}
