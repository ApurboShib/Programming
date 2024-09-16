#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;


signed main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr);

 int n;
 cin >> n;
 ll fact = 1;
 // for(int i = 2; i <= n; i++){
 // 	fact *= i;
 // }

 // optimize with MOD.

 for(int i = 2; i <= n; i++){
 	fact = (fact * i) % MOD;
 }
 cout << fact << endl;

 return 0;
}