// sort an array..


// // approch -2 (bit better soluation).
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define endl '\n'

// int32_t main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);

//    int n;
//    cin >> n;
//    int a[n];
//    for(int i = 0; i < n; i++) cin >> a[i];

//    int cnt0 =0, cnt1 =0, cnt2 = 0;

// 	for(int i = 0; i < n; i++) {
// 		if(a[i] == 1) cnt1++;
// 		else if(a[i] == 0) cnt0++;
// 		else cnt2++;
// 	}

// 	for(int i = 0; i < cnt0; i++) {
// 		a[i] = 0;
// 	}
// 	for(int i = cnt0; i < cnt1 + cnt2; i++) {
// 		a[i] = 1;
// 	}
// 	for(int i = cnt0 + cnt1; i < n; i++) {
// 		a[i] = 2;
// 	}
// 	for(auto x : a) cout << x << ' ';
   
// }


// approch - 2 ( optimal soluation).

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(int n, vector<int> &v) {
	int low = 0, mid = 0, high = n - 1;

	while(mid <= high) {
		if(v[mid] == 0) {
			swap(v[low], v[mid]);
			low++;
			mid++;
		}
		else if(v[mid] == 1) {
			mid++;
		}
		else{
			swap(v[mid], v[high]);
			high--;
		}
	}
	for(auto x : v) cout << x << ' ';
}
int32_t main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int n;
   cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) {
   	cin >> v[i];
   }
   solve(n, v);
   
}