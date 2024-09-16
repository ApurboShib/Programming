#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;


signed main(){

   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;

   while (t--) {
    int n, k;
    cin >> n >> k;

    vector<int> freq(101, 0);
    vector<int> cards(n);

    for (int i = 0; i < n; ++i) {
        cin >> cards[i];
        freq[cards[i]]++; 
    }

    bool flag = true;
    for (int i = 1; i <= 100; ++i) {
        if (freq[i] >= k) { 
            flag = false;
            break;
        }
    }

    if (flag) {
        cout << n << endl; 
    } else {
        cout << k - 1 << endl;
    }
}

return 0;
}