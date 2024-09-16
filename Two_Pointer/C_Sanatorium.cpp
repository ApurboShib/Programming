#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c;
    cin >> a >> b >> c;
    int day = max({a,b,c});
    int cnt = 0;
    cout << max(cnt,day-a) + max(cnt,day-b) + max(cnt,day-c)<<endl;
    return 0;
}
