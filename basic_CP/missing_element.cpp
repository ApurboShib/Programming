// find the missing elements.

// approch -1 : (broutforce):

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define endl '\n'

// int missingNumber(int n, int a[]) {
// 	for(int i = 1; i < 1000; i++) {
// 		int ans = 0;
// 		for(int j = 0; j < n; j++) {
// 			if(a[j] == i) {
// 				ans = i;
// 				break;
// 			}
// 		}
// 		if(ans == 0){
// 			return i;
// 		}
// 	}
// 	return -1;
// }
// int32_t main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);

//    int n;
//    cin >> n;
//    int a[n];
//    for(int i = 0; i < n; i++) cin >> a[i];

//    cout << missingNumber(n, a) << endl;
   
// }


// approch - 2 (hashing better then broutforce):

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define endl '\n'

// int hashing(int n, int a[]) {
// 	int hash[n + 1] = {0};
// 	for(int i = 0; i < n; i++) {
// 		hash[a[i]] = 1;
// 	}

	
// 	for(int i = 1; i < n; i++) {
// 		if(hash[i] == 0) {
// 			return i;
// 		}
// 	}
// 	return - 1;
// }
// int32_t main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);

//    int n;
//    cin >> n;
//    int a[n];
//    for(int i = 0; i < n; i++) {
//    	cin >> a[i];
//    }
//    cout << hashing(n, a) << endl;
   
// }

// approch - 3 (optimal soluation).

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define endl '\n'

// int solve(int n, int a[]) {
// 	int sum = 0;
// 	for(int i = 0; i < n; i++) {
// 		sum += a[i];
// 	}
// 	int ans = n * (n + 1) / 2;

// 	return abs(ans - sum);
// }
// int32_t main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);

//    int n;
//    cin >> n;
//    int a[n];
//    for(int i = 0; i < n; i++) {
//    	cin >> a[i];
//    }
//    cout << solve(n, a) << endl;
   
// }

// approch - 4(more optimal using XOR):

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

   int x1 = a[0], x2 = 1;

   for(int i = 1; i < n; i++) {
   	x1 ^= a[i];
   }
   for(int i = 2; i < n + 1; i++) {
   	x2 ^= i;
   }
   cout << (x1 ^ x2) << endl;
   
}
// this is more optimal soluation to find the missing number and in this cole no tlr anytime.
