// fibonacci with rec..
// time complexity of rec is number of calling.

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;
int cnt;
int op;

int fibo (int n){
	//cout << n << ' ';
	cnt++;
	for(int i = 0; i < 1000; i++){
		op++;
	}

	if(n <= 1)return n;

	int ans = fibo(n - 1) + fibo(n - 2);
	
	return ans;

}

signed main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr);

int ans = fibo(5);
cout << "total nnumber of calling is : " <<  cnt << endl;
cout << op << endl;
 

 return 0;
}