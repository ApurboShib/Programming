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
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    seive();
    int n;
    cin >> n;
    int p;
    while(n > 1){
        p = spf[N];
        int cnt = 0;
        while(n % p == 0){
            n/=p;
            cnt++;

        }
         for(int i = 0; i< cnt; i++){
        cout << p << endl;
    }
    }
   
    return 0;
}
