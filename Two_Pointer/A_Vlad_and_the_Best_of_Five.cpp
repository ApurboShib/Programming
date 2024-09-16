#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

const int N = 1e5 + 9;

char solve(string s) {
  int cnt_1 = 0;
  int cnt_2 = 0;

  for (char c : s) {
    if (c == 'A') {
      cnt_1++;
    } else if (c == 'B') {
      cnt_2++;
    }
  }

  return cnt_1 > cnt_2 ? 'A' : 'B';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;

    cout << solve(s) << endl;
  }

  return 0;
}
