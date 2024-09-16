#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e7 + 9;
ll d[N];
void solve(ll n){
    for(ll i = 1; i < N; i++){
        for(ll j = i; j < N; j+=i){
            d[j]++;
        }
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    solve(n);
    vector<int> prime;
    for(int i = 1; i <= n; i++){
        if(d[i] == 2)prime.push_back(i);
    }
    for(auto x : prime)cout << x << endl;
    return 0;
}
int spf[N];
vector<int> primes;

