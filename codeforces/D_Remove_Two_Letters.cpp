#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string ans = ""; 
        for(int i = 2; i < n; i++){
            ans.push_back(s[i]);
        }

        int l = 0;
        int r = 0;
        int res = 1;
        while(l < n-2){ 
            if(s[l] != ans[r]){
                res++;
            }
            l++;
            r++;
        }
        cout << res << endl; 
    }
    
    return 0;
}
