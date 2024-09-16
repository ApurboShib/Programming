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
 int sum = 0;
 for(int i = 0; i < n; i++) {
 	cin >> a[i];
 	sum+= a[i];
 }
 cout << sum << endl;


 return 0;
}