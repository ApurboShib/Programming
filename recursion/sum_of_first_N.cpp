// sum of the first natural number.

// perameterized method..

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define endl '\n'
// int sum;

// void solve(int n, int sum) {
// 	if(n < 1) {
// 		cout << sum << endl;
// 		return;
// 	}
// 	else{
// 		 solve(n - 1, n + sum);
// 	}
// }
// int32_t main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);

//    int n;
//    cin >> n;
//    solve(n, 0);
   
// }

// functional methods.

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int solve(int n) {
	if(n == 0) {
		return 0;
	}
	else{
		int sum = n + solve(n - 1);
		return sum;

	}

}
int32_t main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int n;
   cin >> n;
   cout << solve(n) << endl;
   
}