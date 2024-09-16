#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;

int sum (int n){
	if(n == 0)return 0;
	return n + sum(n - 1);
}

signed main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr);

 cout << "sum is : " << sum(10) << endl;
 cout << "sum is : " << sum (5) << endl;

 

 return 0;
}