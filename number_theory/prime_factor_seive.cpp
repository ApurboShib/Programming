#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;

int spf[N];

void seive(){
    for(int i = 2; i * i < N; i++){
        if(spf[i] == 0){
            for(int j = i; j < N; j+=i){
                if(spf[j] == 0) spf[j] = i;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    seive();
    int n;
    cin >> n;
    map<int, int> mp;
    while(n > 1){
        int p = spf[n];
        while(n % p == 0){
            mp[p]++;
            n /= p;
        }
    }
    //now find the prime fectores.
    for(auto x : mp){
        cout << x.first << " " << x.second << endl;
    }

    // find the smallest and the largest prime fector of the number..

    return 0;
}
