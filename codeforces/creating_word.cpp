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
 	string a, b;
 	cin >> a >> b;
 	swap(a[0], b[0]);

 	cout << a << ' ' << b << endl;
 }

 return 0;
}
