#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int a, b;
    cin >> a >> b;
    int xK, yK;
    cin >> xK >> yK;
    int xQ, yQ;
    cin >> xQ >> yQ;

    int dx = xQ - xK;
    int dy = yQ - yK;

    if (dx < 0) dx *= -1;
    if (dy < 0) dy *= -1;

    int ans = 0;
    if (dx % a == 0 && dy % b == 0) {
      int dx1 = dx / a;
      int dy1 = dy / b;
      ans = max(dx1, dy1) * 2 - 1;
    } else if (dx % b == 0 && dy % a == 0) {
      int dx2 = dx / b;
      int dy2 = dy / a;
      ans = max(dx2, dy2) * 2 - 1;
    }

    cout << ans << endl;
  }

  return 0;
}
