// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define endl '\n'

// int32_t main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);

//    int n;
//    cin >> n;

//    for(int i = 0; i < n; i++) {
//    	   for(int j = 0; j < i + 1; j++) {
//    	   	cout << (i + 1) << ' ';
//    	   }
//    	   cout << endl;
//    }
   
// }

// make the same pattarn for character..

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
   		 char ans = (i + 1) + 64;
   		 cout << ans << ' ';
   	}
   	cout << endl;
   }
   
}


// // approch -2 
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define endl '\n'

// int32_t main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);

//    int n;
//    cin >> n;

//    for(int i = 1; i <= n; i++) {
//        string ans(i, 'A' + i - 1); 
//        cout << ans << endl;        
//    }

// }
