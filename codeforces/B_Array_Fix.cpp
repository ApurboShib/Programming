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
        for(int i = 0; i < n; i++) cin >> v[i];
        bool f = true;
         int last = v.back();
        while(v.size()){
           
            if(v.back() <= last){
                last = v.back();
                v.pop_back();
            }
            else{
                if(v.back() < 10){
                    f = false;
                    break;
                }
                int x = v.back();
                v.pop_back();
                v.push_back(x / 10);
                v.push_back(x % 10);
            }
        }
        if(f)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
