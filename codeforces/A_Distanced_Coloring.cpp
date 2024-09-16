#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int t;
   cin >> t;
   while(t--) {
    int x, y, k;
    cin >> x >> y >> k;

    cout << min(x, k) * min(y, k) << endl;
   }
   return 0;

}

