#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int t;
   cin >> t;
   while(t--) {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int bad = 0;
    int mn = v[n - 1];
    reverse(v.begin(), v.end());
    for(int i = 0; i < n; i++) {
         mn = min(mn, v[i]);
        if(v[i] > mn) {
            bad++;
        }
       
    }
    cout << bad << endl;
   }

}

