#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int cnt;
void fun() {
	if(cnt == 10) return;
	else{
		cout << cnt << ' ';
		cnt++;
		fun();
	}
}
int32_t main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   fun();
   
}