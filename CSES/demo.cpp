#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;
void solve(vector<int>&v, int x){
    sort(v.begin(),v.end());
    int cnt = 0;
    int l = 0;
    int r = v.size()-1;
    while(l<=r){
    if(v[l] + v[r] <= x){
        cnt++;
        l++;
        r--;
    }
    else{
        cnt++;
        r--;
    }

    }
    cout << cnt << endl;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x;
    cin >> n >> x;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    solve(v,x);
    return 0;
}
