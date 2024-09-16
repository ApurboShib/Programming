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

 cout << n << ' ';
 while(n > 1){
 	if(n % 2 == 0){
 		n/= 2;
 	}
 	else{
 		n = 3 * n + 1;
 	}
 	cout << n << ' ';
 }

 return 0;
}