#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;


signed main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr);

 ll n;
 cin >> n;
 ll sum = 0;
 ll a[n];
 for(ll i = 0; i < n; i++){
 	cin >> a[i];
 	sum+=a[i];
 }
 cout << sum << endl;

 return 0;
}