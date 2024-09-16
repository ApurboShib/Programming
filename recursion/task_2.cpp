// print 1 - N using recrursion..

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int cnt;

void print(int n){
	if(n == 0) return;
		//cout << n << endl;
		print(n - 1);
		cout << n << endl;
	}


int32_t main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int n;
   cin >> n;
   print(n);
   
}