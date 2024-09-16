#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;

vector<bool> seive() {
    vector<bool> prime(N, true);
    prime[0] = prime[1] = false;

    for(int i = 2; i * i < N; i++) {
        if(prime[i]) {
            for(int j = i * i; j < N; j+=i) {
                prime[j] = false;
            }
        }
    }
    return prime;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    vector<bool> prime = seive();

    for(int i = 0; i < N; i++) {
        if(prime[i]) {
            cout << i << ' ';
        }
        
    }
    return 0;
}
