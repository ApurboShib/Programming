// print the name for 5 times.
// solve it by recursion.

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int cnt;
void print() {
	if(cnt == 5) return;
	else{
		cout << "JOY SHIB" << endl;
		cnt++;
	}
	print();

}
int32_t main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   print();
   
}