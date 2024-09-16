#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--)
  {
    int x, y;
    cin >> x >> y;

    int gcd = __gcd(x, y);

    cout << gcd << endl;
  }

  return 0;
}
