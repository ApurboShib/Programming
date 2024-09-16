#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;

void solve(vector<int>&v){
    int zero_cnt = 0;
    for(auto & x : v){
        if(x==0)zero_cnt++;
    }
    for(int i=0; i<v.size(); i++){
        if(i<zero_cnt){
            v[i] = 0;
        }
        else{
            v[i] = 1;
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

    for(int i=0; i<n; i++){
        cout << v[i] << ' ';
    }
    cout << endl;

    return 0;
}
