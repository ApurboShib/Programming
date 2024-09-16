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
 while(t--){
 	ll a, b;
 	cin >> a >> b;
 	if((2 * a) > b){
 		cout << -1 << ' ' << -1 << endl;
 	}
 	else{
 		cout << a <<' ' << 2 * a << endl;
 	}
 }
 

 return 0;
}