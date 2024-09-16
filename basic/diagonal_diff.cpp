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
 int a[n][n];
 int sum1 = 0, sum2 = 0;
 for(int i = 0; i < n; i++){
 	for(int j = 0; j < n; j++){
 		cin >> a[i][j];
 		if(i == j) sum1 += a[i][j];
     	if(i == n - j - 1) sum2+= a[i][j];	
 	}
 }
 
 cout << abs(sum1 - sum2)<< endl;

 return 0;
}