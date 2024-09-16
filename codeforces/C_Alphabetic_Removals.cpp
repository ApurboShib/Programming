#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n';
int32_t main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
int n, k;
cin >> n >> k;
vector<char> v1(n), v2(n);
for(int i = 0; i < n; i++){
    cin >> v1[i];
    v2[i] = v1[i];
}
sort(v2.begin(), v2.end());
map<char, int> mp;
for(int i = 0; i < k; i++){
    mp[v2[i]]++;
}

for(int i = 0; i < n; i++){
    if(mp[v1[i]] > 0){
        mp[v1[i]]--;
    }
    else{
        cout << v1[i];
    }
}
return 0;
}