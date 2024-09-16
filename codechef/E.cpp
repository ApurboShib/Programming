#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
      cin >> v[i];
    }

    vector<int> pref(n + 1, 0);
    for (int i = 1; i <= n; ++i)
    {
      pref[i] = pref[i - 1] + v[i - 1];
    }

    vector<int> ans(n + 1, 0);

    for (int i = 0; i < n; ++i)
    {
      for (int j = i; j < n; ++j)
      {

        int sum = pref[j + 1] - pref[i];
        ans[sum]++;
      }
    }

    for (int i = 1; i <= n; ++i)
    {
      cout << ans[i] << " ";
    }
    cout << endl;
  }

  return 0;
}
