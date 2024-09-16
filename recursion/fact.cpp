// calculate the factorial with rec..
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;

int fact (int n){
	if(n == 0 or n == 1)return 1;
	return n * fact(n - 1);

}

signed main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr);
 cout << fact(5) << endl;
 cout << fact(10) << endl;

 

 return 0;
}