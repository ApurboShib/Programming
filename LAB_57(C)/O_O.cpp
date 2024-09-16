#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  vector<int> b(n + 1);
  b[0] = k;
  for (int i = 1; i <= n; i++) {
    b[i] = max(a[i], b[i - 1] + k - a[i - 1]);
  }

  int additional_walks = 0;
  for (int i = 0; i < n; i++) {
    additional_walks += max(0, b[i + 1] - a[i]);
  }

  cout << additional_walks << endl;
  for (int i = 0; i <= n; i++) {
    cout << b[i] << " ";
  }

  return 0;
}
