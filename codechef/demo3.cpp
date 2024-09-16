#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;
vector<ll>div;
void divisor(ll n){
    for(int i=2; i<=n; i++){
        if(n%i==0)div.push_back(i);
        if(i!=n/i)div.push_back(n/i);
    }
    return;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        int res = 1;
        for(int i=0; i<n; i++){
            ans*=i;
        }
        divisor(ans);
        for(auto x : div){
            cout << x << ' ';
        }
        cout << endl;
    }
    return 0;
}
