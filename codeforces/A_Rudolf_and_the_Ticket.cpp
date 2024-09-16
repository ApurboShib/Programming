#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>& v1, vector<int>& v2, int x) {
  int cnt = 0;
  int n = v1.size();
  int m = v2.size();

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (v1[i] + v2[j] <= x) {
        cnt++;
      }
    }
  }

  return cnt;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int t;
  cin >> t;

  while (t--) {
    int n, m, x;
    cin >> n >> m >> x;

    vector<int> v1(n);
    for (int i = 0; i < n; i++) {
      cin >> v1[i];
    }

    vector<int> v2(m);
    for (int j = 0; j < m; j++) {
      cin >> v2[j];
    }

    cout << solve(v1, v2, x) << endl;
  }

  return 0;
}
