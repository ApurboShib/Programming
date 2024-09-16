#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int k, n, w, ans = 0;
    cin >> k >> n >> w;

    for (int i = 1; i <= w; i++) {
        ans += i * k;
    }

    cout << max(0, ans - n) << endl;


}

