#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;


signed main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr);

 int t;
 cin >> t; 

  while (t--) {
       int n, a, b;
       cin >> n >> a >> b; 
        if (b < 2 * a) { 
            cout << (n / 2) * b + (n % 2) * a << endl;
        } else { 
            cout << n * a << endl;
        }
    }


 return 0;
}