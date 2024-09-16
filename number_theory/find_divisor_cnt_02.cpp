#include<bits/stdc++.h>
using namespace std;
#define end '\n'

set<int>v;
void divisor(int n){
    for(int i=1; i*i<=n; i++){
       // if(i*i==0)v.push_back(i);
        if(n%i==0)v.insert(i);
        if(i!=n/i)v.insert(n/i);
    }
    return;
}
int32_t main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
int n;
cin >> n;
divisor(n);
for(auto x : v)cout << x << ' ';
cout << "Number of divisor is : "<<v.size();

return 0;
}