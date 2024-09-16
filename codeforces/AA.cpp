#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;


signed main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr);

 int t;
 cin >> t;
 while(t--){
    ll n;
    cin >> n;
    vector<int>v(n);
    for(int i =0; i < n; i++) cin >> v[i];
        map<int, int> mp;
    for(auto x : v){
        mp[x]++;
    }
    int ans = 0;
    for(auto x : mp){
        ans+= x.second/3;
    }
    cout << ans << endl;
 }

 return 0;
}