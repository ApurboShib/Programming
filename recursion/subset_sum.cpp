// all possible subset sum..

// approch : 1(Bitmasking).
/*
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

   int sum = 0;

   for(int mask = 0; mask < (1 << n); mask++) {
   	for(int i = 0; i < n; i++){
   		if(mask & (1 << i)){
   			sum+= a[i];
   		}
   	}
   }
   cout << sum << endl;
   
}*/

// approch -2 (recursive).

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(int a[], int n, int idx, int curr_sum, int &total_sum){

	if(idx == n){
		total_sum += curr_sum;
		return;
	}

	solve(a, n, idx + 1, curr_sum, total_sum);
	solve(a, n, idx + 1, curr_sum + a[idx], total_sum);
}
int32_t main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int n;
   cin >> n;
   int a[n];
   for(int i = 0; i < n; i++) {
   	cin >> a[i];
   }

  int total_sum = 0;
  solve(a, n, 0, 0, total_sum);
  cout << total_sum << endl;
   
}



