// brouthforce idea tor solve this problem..

// #include <bits/stdc++.h>
// using namespace std;
// #define endl '\n'
// #define ll long long
// const int MOD = 1e9 + 7;
// const int N = 1e5 + 9;


// signed main(){

// 	ios::sync_with_stdio(false);
// 	cin.tie(nullptr);

// 	ll n;
// 	cin >> n;
// 	int a[n];
// 	int sum = 0;
// 	for(int i = 0; i < n; i++){
// 		cin >> a[i];
// 	}
// 	ll total_sum = 0;
// 	for(int mask = 0; mask < (1 << n); mask++){
// 		ll sum = 0;
// 		for(int i = 0; i < n; i++){
// 			if(1 & (mask >> i)){
// 				sum += a[i];
// 			}
// 		}
// 		total_sum += sum;
// 	}

// 	cout << total_sum << endl;

// 	return 0;
// }


// here is a optimal soluation of this problem..


#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;


signed main(){

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int a[n], sum = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		sum += (a[i] * (1 << n - 1));
	}
	cout << sum << endl;

	return 0;
}