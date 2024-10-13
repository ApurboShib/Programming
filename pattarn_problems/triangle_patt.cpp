#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int32_t main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int n;
   cin >> n;

   for(int i = 0; i < n; i++) {
   		for(int j = 0; j < i + 1; j++) {
   			cout << "*" << ' ';
   		}
   		cout << endl;
   }
   
}