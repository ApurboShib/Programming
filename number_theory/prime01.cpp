#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main(){
 ios::sync_with_stdio(false);
 cin.tie(nullptr);
int n;
cin >> n;
vector<int>cnt;
for(int i=1; i*i<n; i++){
cnt.push_back(i*i);
}
for(auto x : cnt)cout << x << ' ';

return 0;
}
