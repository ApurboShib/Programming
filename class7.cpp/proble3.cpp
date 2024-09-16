/* you have a n list number 1-N, innitally all list are empty,we have q query of the form l,r,x.
for each query you have to append x to all list from l to r inclusive . after all querys you have to print 
the number of unique elements of each list.*/

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;
vector<int>add[N],rem[N];

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,q;
    cin >> n >> q;
    while(q--){
        int l,r,x;
        cin >> l >> r >> x;
        add[l].push_back(x);
        rem[r+1].push_back(x);
    }
    map<int, int>mp;
    for(int i=1; i<=n; i++){
        for(auto & x : add[i]){
            mp[x]++;
        }
        for(auto & x : rem[i]){
            mp[x]--;
            if(mp[x]==0){
                mp.erase(x);
            }
        }
        cout << mp.size()<<endl;

    }
    return 0;
}
