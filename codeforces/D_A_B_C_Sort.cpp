#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
        ll n;
        cin >> n;
        
        vector<ll> v(n+1);
        for(int i = 1; i <= n; i++){
            cin >>v[i];
        }
        ll l = 0;
        ll r = n;
        while(r > 1){
            if(v[r-1] > v[r])
                swap(v[r-1], v[r]);
            r -= 2;
        }
        if(is_sorted(v.begin(), v.end())){
            cout << "YES"<<endl;
        }
        else{
            cout << "NO"<<endl;
        }
    }

    
    return 0;
}
