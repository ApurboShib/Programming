/*we have n list number from 1 to N, and all list are initally empty. we have q queries of the form l,r,x
. for each query, we have to append x to all lists from l to r inclusive. after all queries print the number of unique 
elements..*/

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;
vector<int>add[N],rem[N],prefix;
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

    // print the array.
    // for(int i=1; i<=n; i++){
    //     for(auto x : add[i]){
    //         prefix.push_back(x);
    //     }
    //     for(auto x : rem[i]){
    //         prefix.erase(find(prefix.begin(),prefix.end(),x));
    //     }
    //     for(auto x : prefix){
    //         cout << x << ' ';
    //     }
    //     cout << endl;
    // }

    map<int,int>mp;
    for(int i=1; i<=n; i++){
        for(auto & x : add[i]){
            mp[x]++;
        }
        for(auto &x : rem[i]){
            mp[x]--;
            if(mp[x]==0){
                mp.erase(x);
            }
        }
        cout << mp.size()<<endl;
    }


    return 0;
}

