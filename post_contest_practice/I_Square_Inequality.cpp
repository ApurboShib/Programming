#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main(){
 ios::sync_with_stdio(false);
 cin.tie(nullptr);
long long int a,b,c;
cin >> a >> b >>c;
if(a*a + b*b < c*c)cout << "Yes" << endl;
else cout << "No" << endl;

return 0;
}
