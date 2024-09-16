// // Rearrange Array Elements by Sign.

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long

// int32_t main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    int n;
//    cin >> n;
//    vector<int> v(n);
//    for(int i = 0; i < n; i++) {
//     cin >> v[i];
//    }
//    vector<int> pos;
//    vector<int> neg;

//    for(int i = 0; i < n; i++) {
//     if(v[i] > 0) {
//         pos.push_back(v[i]);
//     }
//     else{
//         neg.push_back(v[i]);
//     }
//    }

// //    for(auto x : pos) cout << x << ' ';
// //    cout << endl;
// //    for(auto x : neg) cout << x << ' ';

// int p_sz = pos.size();
// int n_sz = neg.size();
// int p_idx = 0, n_idx = 0;

// for(int i = 0; i < n; i++) {
//     if(i % 2 == 0) {
//         if(p_idx < p_sz) {
//             cout << pos[p_idx++] << ' ';
//         }
//         else if(n_idx < n_sz) {
//             cout << neg[n_idx++] << ' ';
//         }
//     }
//     else{
//         if(n_idx < n_sz) {
//             cout << neg[n_idx++] <<' ';
//         }
//         else if(p_idx < p_sz) {
//             cout << pos[p_idx++] << ' ';
//         }
//     }
// }
// cout << endl;

// }


// another approch to do it a  better implementation.

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n;
   cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];

   vector<int> pos, neg;
   for(int i = 0; i < n; i++) {
    if(v[i] > 0) {
        pos.push_back(v[i]);
    }
    else{
        neg.push_back(v[i]);
    }
   }

   for(int i = 0; i < n / 2; i++) {
    v[2 * i] = pos[i];
    v[2 * i + 1] = neg[i];
   }
    for(auto x : v) cout << x << ' ';
}
   


