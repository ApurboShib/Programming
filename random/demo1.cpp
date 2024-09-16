#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;
int fact[N];
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    // vector<int>v(n);
    // for(int i=0; i<n; i++){
    //     cin >> v[i];
    // }
    fact[0] = 1, fact[1] = 1;
    for(int i = 2; i < n; i++){
        fact[i] = fact[i-1]+i;
    }
 

    
    return 0;
}
