#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;
const int MAX = 1e9+7;
int fact[N];

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    fact[0] = 1;
    for(int i=1; i<N; i++){  
        fact[i] = (fact[i-1] * i) % MAX;  
    }
    int t;
    cin >> t;
    int tc = 1;
    while(t--){
        int n;
        cin >> n;
        int ans = fact[n] / 2;
        cout << "Case " << tc << ": " << ans << endl;
        tc++;
    }
    return 0;
}
