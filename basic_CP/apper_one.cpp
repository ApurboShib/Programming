// Find element that appears once..

// approch -1 (broutforce):

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
//    for(int i = 0; i < n; i++) {
//    	cin >> a[i];
//    }

//    for(int i = 0; i < n; i++) {
//    	int x = a[i];
//    	int cnt = 0;
//    	for(int j = 0; j < n; j++) {
//    		if(a[j] == x) {
//    			cnt++;
//    		}
//    	}
//    	if(cnt == 1) {
//    		cout << x << endl;
//    	}
//    }
   
// }

// approch -2 (hashing for better soluation).

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
//    int maxi = 0;
//    for(int i = 0; i < n; i++) {
//    		cin >> a[i];
//    		maxi = max(maxi, a[i]);
//    }

//    int hash[maxi + 1] = {0};

//    for(int i = 0; i < n; i++) {
//    	hash[a[i]]++;
//    }
//    int ans = 0;
//    for(int i = 0; i < n; i++) {
//    	if(hash[a[i]] == 1){
//    		ans = a[i];
//    		cout << ans << endl;
//    	}
//    }
   
// }	


// in our 2nd approch hashing is not good enough, cz hash can't work with negative array, we use map.

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define endl '\n'

// int32_t main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);

//    int n;
//    cin >> n;
//    vector<int> v(n);
//    for(int i = 0; i < n; i++) cin >> v[i];

//    	map<ll, int> mp;

//    for(auto it : v) {
//    	mp[it]++;
//    }

//    for(auto it : mp) {
//    	if(it.second == 1) {
//    		cout << it.first << endl;
//    	}
//    }
   
// }

// approch -3 (optimal code):

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
   int x_or = 0;
   for(int i = 0; i < n; i++) {
   	x_or ^= v[i];
   	
   }

   cout << x_or << endl;
   
}
