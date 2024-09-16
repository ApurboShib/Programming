// find tje missing number.

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n;
   cin >> n;
   int a[n];
   int sum = 0;
   for(int i = 0; i < n - 1; i++) {
    cin >> a[i];
    sum += a[i];
   }
   int ans = n * (n + 1) / 2;
   cout << ans - sum << endl;

}

