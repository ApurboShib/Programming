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
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i =  0; i < n; i++) cin >> v[i];
        vector<int> pref(n + 1);
        for(int i = 1; i <= n; i++){
            pref[i] = pref[i - 1] ^ v[i - 1]; 
        }

        bool f = false;
        for(int i = 1; i < n; i++){
            int a = pref[i];
            int b = pref[n] ^ pref[i]; 
            if(a == b){
                f = true;
                break;
            }
        }
        for(int i = 1; i < n - 1; i++){
            int a = pref[i];
            for(int j = i + 1; j < n; j++){
                int b = pref[j] ^ pref[i]; 
                int c = pref[n] ^ pref[j];
                if(a == b && b == c){
                    f = true;
                    break;
                }
            }

        }
        if(f) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
