#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }

    vector<int> ans;
    for(int i = 2; i<n; i++){
        ans.push_back(v[i]);
    }
    for(auto x : ans){
        cout << x << ' ';
    }
    cout << endl;
    // ll sum1 = 0;
    // ll sum2 = 0;
    // for(int i = 0; i<n; i++){
    //     sum1+=v[i];
    //     sum2+=ans[i];
        
    // }
    // cout <<
    
    
    return 0;
}
