#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, t;
    cin >> s >> t;
    string ans;
    int cnt = 0;
    for(int i = 0; i<s.size(); i++){
        if(s[i]==t[i]){
            ans+=s[i];
        }
        else{
            cnt++;
            if(cnt & 1){
                ans+=s[i];
            }
            else{
                ans+=t[i];
            }

        }
    }
    if(cnt & 1){
        cout << "impossible" << endl;
    }
    else{
        cout << ans << endl;
    }
    return 0;
}
