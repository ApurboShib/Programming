// using bitmasking 

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
 vector <int> v(n);
 for(int i = 0; i < n; i++)cin >> v[i];
 // int sum = 0;
 // for(int mask = 0; mask < (1 << n); mask++){
 // 	for(int i = 0; i < n; i++){
 // 		if(1 & (mask >> i))sum+=v[i];
 // 	}
 // }

 // for optimal code..
 	
 cout << sum << endl;

 return 0;
}