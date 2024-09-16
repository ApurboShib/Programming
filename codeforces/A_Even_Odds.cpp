#include<bits/stdc++.h>
using namespace std;
#define end '\n'
int32_t main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
 long long n, k;
    cin >> n >> k;

    if (k <= (n + 1) / 2) {
     
        cout << k * 2 - 1 << end;
    } else {
     
        cout << (k - (n + 1) / 2) * 2 << end;
    }


return 0;
}