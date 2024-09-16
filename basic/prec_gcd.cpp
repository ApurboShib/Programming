// #include <bits/stdc++.h>
// using namespace std;
// #define endl '\n'
// #define ll long long
// const int MOD = 1e9 + 7;
// const int N = 1e5 + 9;


// signed main(){

//  ios::sync_with_stdio(false);
//  cin.tie(nullptr);

//  int t;
//  cin >> t;
//  while(t--){
//  	int n, q;
//  	cin >> n >> q;
//  	int a[n + 1];

//  	for(int i = 1; i <= n; i++){
//  		cin >> a[i];
//  	}

//  	while(q--){
//  		int l, r;
//  		cin >> l >> r;
//  		int gc = 0;
//  		for(int i = 1; i <= l - 1; i++){
//  			gc = __gcd(gc, a[i]);
//  		}
//  		for(int i = r + 1; i <= n; i++){
//  			gc = __gcd(gc, a[i]);
//  		}
//  		cout << gc << endl;
//  	}

//  }

//  return 0;
// }

// optimal code..

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
 	int n, m;
 	cin >> n >> m;
 	int a[n];
 	for(int i = 1; i <= n; i++){
 		cin >> a[i];
 	}

 	int forw[n + 1];
 	int backw[n + 1];
 	forw[0] = backw[n] = 0;
 	for(int i = 1; i <= n; i++){
 		forw[i] = __gcd(forw[i - 1], a[i]);
 	}
 	for(int i = n; i >= 1; i--){
 		backw[i] = __gcd(backw[i + 1], a[i]);
 	}
 	while(m--){
 		int l, r;
 		cin >> l >> r;
 		cout << __gcd(forw[l - 1], backw[r + 1]) << endl;
 	}

 }

 return 0;
}