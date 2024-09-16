// find the longest subarrray sum with k sum...

// approch - 1 (broutforce -1);

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

//    int tottal_sum = 0;
   
//    for(int i = 0; i < n; i++) {
//    	for(int j = i; j < n; j++) {
//    		int s = 0;
//    		for(int k = i; k <= j; k++) {
//    			s += a[k];
//    		}
//    		tottal_sum += s;
//    	}
//    }
//    cout << tottal_sum << endl;
// }

// approch - 2 (broutforce - 2);

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
// 	int total_sum = 0;
// 	for(int i = 0; i < n; i++) {
// 		int sum = 0;
// 		for(int j = i; j < n; j++) {
// 			sum += a[j];
// 			total_sum += sum;
// 		}
// 			}
// 	cout << total_sum << endl;
   
// }



// approch - 3 (better soluation using hasing..)

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int32_t main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int n;
   cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) {
   	cin >> v[i];
   }
   int k; cin >> k;

   map<int, vector<int>> mp;
   int sum = 0;
   int cnt = 0;
   for(int i = 0; i < n; i++) {
   	sum += v[i];
   	if(sum == k) {
   		cnt++;
   	}

   	int ans = sum - k;
   	if(mp.find(ans) != mp.end()) {
   		cnt += mp[ans].size();
   	}

   	mp[sum].push_back(i);
   }

   cout << cnt << endl;
   
}



