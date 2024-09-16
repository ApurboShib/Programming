#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
signed main(){
 ios::sync_with_stdio(false);
 cin.tie(nullptr);
ll a,b;
cin >> a >> b;
int sum=0;
for(int i=a; i<b;i++){
sum+=i;
cout << i << endl;
}
cout << sum << endl;
return 0;
}
