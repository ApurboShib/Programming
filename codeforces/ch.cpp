#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n';
int32_t main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
ll n;
cin >> n;
vector<int> v(n);
for(int i = 0; i < n; i++) cin >> v[i];

ll sum = 0;
int s = 0;
for(int i = 0; i < n; i++){
    sum+=v[i];
}
//cout << sum << endl;
s = (n * (n + 1)/2);
cout << abs(sum - s) << endl;
return 0;
}