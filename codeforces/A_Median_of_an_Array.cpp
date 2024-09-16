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
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        map<int,int> mp;
        for(auto x : v){
            mp[x]++;
        }
        sort(v.begin(),v.end());
        int x = (n + 1)/2;
        int cnt = 0;
        for(int i = 0; i < n; i++){
            if(v[i] == v[x-1]) // Corrected the condition here
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
