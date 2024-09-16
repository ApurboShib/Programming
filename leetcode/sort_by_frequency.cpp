#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   string s;
   cin >> s;

   map<char, int> mp;

   for(auto x : s) {
    mp[x]++;
   }

   vector<pair<int, char>> vp;

   for(auto x : mp) {
    vp.push_back({x.second, x.first});
   }

    string ans = "";
     sort(vp.begin(), vp.end(), greater<pair<int, char>>());

    for(auto x : vp) {
        ans += string(x.first, x.second);
    }
    cout << ans << endl;
}

