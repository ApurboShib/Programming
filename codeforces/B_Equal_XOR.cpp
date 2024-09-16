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
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(2 * n);
        map<int, int> mp1, mp2;
        vector<int> ans1, ans2;
        for(int i = 0; i < 2 * n; i++){
            cin >> v[i];
        }
        for(int i = 0; i < n; i++){
            mp1[v[i]]++;
        }
        for(int i = n; i < 2 * n; i++){
            mp2[v[i]]++;
        }
        for(auto it : mp1){
            if(it.second == 2){
                ans1.push_back(it.first);
                ans2.push_back(it.first);
            }
        }
        for(auto it : mp1){
            if(it.second == 1 && mp2[it.first] == 1){
                ans1.push_back(it.first);
                ans2.push_back(it.first);
            }
        }
        for(int i = 0; i < 2 * k; i++) {
            cout << ans1[i] << " ";
        }
        cout << endl;
        for(int i = 0; i < 2 * k; i++) {
            cout << ans2[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
