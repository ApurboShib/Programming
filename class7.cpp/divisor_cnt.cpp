// we know if the divisor cnt is == 2 then this is a prime number.
// 1-n er sobar number of divisor.

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;
int d[N];


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    for(int i= 1; i<=N; i++){
        for(int j = i; j<=N; j+=i){
            d[j]++;
        }

    }
    for(auto x : d){
        cout << x << endl;
    }

    return 0;
}
