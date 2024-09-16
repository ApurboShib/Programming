#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;
void solve(vector<int> &v){
    int l = 0;
    int r = v.size()-1;
    while(l<=r){
        if(v[l]%2!=0 && v[r]%2==0){
            swap(v[l],v[r]);
            l++;
            r--;
        }
        if(v[l]%2==0){
            l++;
        }
        if(v[r]%2!=0){
            r--;
        }
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    solve(v);
    for(auto &x : v){
        cout << x << ' ';
    }
    cout << endl;
    return 0;
}
