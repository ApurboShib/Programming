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
 int a[n];
 for(int i = 0; i < n; i++){
 	cin >> a[i];
 }

 for(int i = 0; i < n; i++){
 	if(a[i] >= 38 and (a[i] % 5 >= 3)){
 		while(a[i] % 5 != 0){
 			a[i]++;
 		}
 	}
 	cout << a[i] << endl;
 }

 return 0;
}