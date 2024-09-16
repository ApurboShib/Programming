#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;


signed main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr);

 int n = 5;
 int a[n];
 for(int i = 0; i < n; i++){
 	cin >> a[i];
 }
sort(a, a + n);
int x;
cin >> x;
bool f = false;
 for(int i = 0; i < n; i++){
 	for(int j = i + 1; j < n; j++){
 		if(a[i] * a[j] == x){
 			cout << a[i] << ' ' << a[j] << endl;
 			f = true;

 		}
 	}

 }


 return 0;
}