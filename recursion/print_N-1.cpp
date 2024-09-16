#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void print(int i, int n) {
	if(i < 1) return;
	else{
		cout << i << endl;
		print(i - 1, n);

	}
}
int32_t main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int i, n;
   cin >> i >> n;
   print(i, n);
   
}