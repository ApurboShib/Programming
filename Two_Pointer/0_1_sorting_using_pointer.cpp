// #include <bits/stdc++.h>
// using namespace std;
// #define endl '\n'
// #define ll long long
// const int N = 1e5 + 9;
// void solve(vector<int>&v){
//     int l = 0;
//     int r = v.size()-1;
//     while(l<=r){
//         v[l] = 1;
//         v[r] = 0;
//         if(v[l]==v[r]){
            
//             l++;
//             r--;
//         }
//         else{
//             swap(v[l],v[r]);
//             l++;
//             r--;
//         }
//     }
// }
// signed main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int n;
//     cin >> n;
//     vector<int>v(n);
//     for(int i=0; i<n; i++){
//         cin >> v[i];
//     }
//     solve(v);
//     for(auto & x : v){
//         cout << x << ' ';
//     }
//     cout << endl;
//     return 0;
// }

// anothe implementation of this soluations.

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;

void solve(vector<int>&v){
    int l = 0;
    int r = v.size()-1;
    while(l<=r){
        if(v[l]==1 && v[r]==0){
            v[l] = 0;
            l++;
            v[r] = 1;
            r--;
        }
        if(v[l]==0){
            l++;
        }
        if(v[r]==1){
            r--;
        }
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    solve(v);
    for(auto & x : v){
        cout << x << ' ';

    }
    cout << endl;
    return 0;
}

