// find the maximum subarray sum...

// approch -1 (broutforce):

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long

// int32_t main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    int n;
//    cin >> n;
//    int a[n];
//    for(int i = 0; i < n; i++) {
//     cin >> a[i];
//    }
    
//     int mx = INT_MIN;

//     for(int i = 0; i < n; i++) {
//         for(int j = i; j < n; j++) {
//             int sum = 0;
//             for(int k = i; k <= j; k++) {
//                 sum += a[k];
//                 mx = max(mx, sum);
//             }
//         }
//     }

//     cout << mx << endl;
// }


// approch - 2(better broutforce):

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long

// int32_t main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    int n;
//    cin >> n;
//    int a[n];
//    for(int i = 0; i < n; i++) {
//     cin >> a[i];
//    }
//     int mx = INT_MIN;
//     for(int i = 0; i < n; i++) {
//         int sum = 0;
//         for(int j = i; j < n; j++) {
//             sum += a[j];
//             mx = max(mx, sum);
//         }
//     }
//     cout << mx << endl;

// }

// approch -3 (optimal soluation using khadan's algorithm):

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n;
   cin >> n;
   int a[n];
   for(int i = 0; i < n; i++) {
    cin >> a[i];
   }

   ll sum = 0;
   ll mx = LLONG_MIN;
   for(int i = 0; i < n; i++) {
    sum += a[i];
    if(sum > mx) {
        mx = sum;
    }
    if(sum < 0) {
        sum  = 0;
    }
   }
   cout << mx << endl;

}




