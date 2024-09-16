#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;


signed main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr);

 ll n, k;
 cin >> n >> k;
 if(k <= (n + 1) / 2){
 	cout << k * 2 - 1;
 }
 else{
 	cout << (k - (n + 1)/2) * 2;
 }

 return 0;
}