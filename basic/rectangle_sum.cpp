// #include <bits/stdc++.h>
// using namespace std;
// #define endl '\n'
// #define ll long long
// const int MOD = 1e9 + 7;
// const int N = 1e5 + 9;


// signed main(){

//  ios::sync_with_stdio(false);
//  cin.tie(nullptr);

//  int n;
//  cin >> n;

//  int ar[n + 1][n + 1];
//  for(int i = 1; i <= n; i++){
//  	for(int j = 1; j <= n; j++){
//  		cin >> ar[i][j];
//  	}
//  }

//  int q;
//  cin >> q;
//  while(q--){
//  	int a, b, c, d;
//  	cin >> a >> b >> c >> d;

//  	long long sum = 0;

//  	for(int i = a; i <= b; i++){
//  		for(int j = c; j <= d; j++){
//  			sum += ar[i][j];
//  		}
//  	}
//  	cout << sum << endl;
//  }

//  return 0;
// }

// 2D prefix sum..

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;
int pref[N][N];


signed main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr);

 int n;
 cin >> n;
 int ar[n + 1][n + 1];

 for(int i = 1; i <= n; i++){
 	for(int j = 1; j <= n; j++){
 		cin >> ar[i][j];
 		pref[i][j] = ar[i][j] + pref[i - 1][j] + pref[i][j - 1] - pref[i - 1][j - 1];

 	}
 }
 
 int q;
 cin >> q;
 while(q--){
 	int a, b, c, d;
 	cin >> a >> b >> c >> d;
 	cout << pref[c][d] - pref[a - 1][d] - pref[c][b - 1] + pref[a -1][b - 1] << endl;
 }

 return 0;
}