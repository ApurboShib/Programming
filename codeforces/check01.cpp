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

 while (t--) {
  int a, b;
  cin >> a >> b;
  int ans = 0;
  ans += b / 2;
  int x = b / 2;

  int i = x;
  while (i > 0) {
    a -= 7;
    i--;
  }

  a = max(0, a);

  if (b % 2 == 1) {
    a -= 11;
    ans++;
  }

  a = max(0, a);

  ans += a / 15;
  a -= 15 * (a / 15);

  if (a > 0) {
    ans++;
  }

  cout << ans << endl;
}

return 0;
}
