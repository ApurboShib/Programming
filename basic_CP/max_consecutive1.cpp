// find the maximum cosecutive 1's..

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int32_t main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int n;
   cin >> n;
   int a[n];
   for(int i = 0; i < n; i++) {
   	cin >> a[i];
   }

   int cnt = 0;
   int mx = INT_MIN;

   for(int i = 0; i < n; i++) {
   	if(a[i] == 1) {
   		cnt++;
   		mx = max(mx, cnt);
   	}
   	else{
   		cnt = 0;
   	}
   }
   cout << mx << endl;
   
}