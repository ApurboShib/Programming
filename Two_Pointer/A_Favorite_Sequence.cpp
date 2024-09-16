#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;
void solve(vector<int>&v, int n){
    int l = 0;
    int r = n-1;
    vector<int>ans;
    while(l<=r){
        ans.push_back(v[l]);
        ans.push_back(v[r]);
        l++;
        r--;
    }
    if(n%2!=0){
        ans.push_back(v[l]);
    }
    for(int i=0; i<v.size(); i++){
        cout << ans[i] << ' ';
    }
    cout << endl;

}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }   
        solve(v,n);
    }
    return 0;
}
