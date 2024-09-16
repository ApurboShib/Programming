#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(string &s1, string &s2){
    map<char,bool>mp;
    for(auto & x : s1){
        mp[x] = true ;
    }
    int cnt = 0;
    for(auto & d : s2){
        if(mp[d])cnt++;
    }
    cout << cnt << endl;
    

    // int cnt = 0;
    // for(int i=0; i<s1.size(); i++){
    //     for(int j = 0; j<s2.size(); j++){
    //         if(s1[i]==s2[j])cnt++;
    //     }
    // }
    // cout << cnt << endl;


}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
        string s1, s2;
        cin >> s1 >> s2;
        solve(s1,s2);
    }

    return 0;
}
