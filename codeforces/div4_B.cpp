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
    string s;
    cin >> s;
    string aa=s;
    string bb=s;
    sort(aa.begin(),aa.end());
    sort(bb.rbegin(),bb.rend());
    if(s==aa and s==bb){
        cout<<"NO"<<endl;
    }
    else if(s!=aa){
        cout<<"YES"<<endl;
        cout<<aa<<endl;
    }
    else if(s!=bb){
        cout<<"YES"<<endl;
        cout<<bb<<endl;
    }
}

return 0;
}