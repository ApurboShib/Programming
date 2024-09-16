#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    queue<int>q;
    for(int i = 0; i < n; i++){
       q.push(v[i]);
    }
    
    return 0;
}
