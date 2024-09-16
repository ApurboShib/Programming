#include <iostream>
#include <vector>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
      cin >> arr[i];
    }

    vector<int> even(n), odd(n);
    even[0] = arr[0];
    odd[0] = -1e9; // corrected

    for (int i = 1; i < n; ++i) {
      if (i % 2 == 0) {
        even[i] = max(even[i - 1] + arr[i], arr[i]);
        odd[i] = odd[i - 1];
      } else {
        even[i] = even[i - 1];
        odd[i] = max(odd[i - 1] + arr[i], arr[i]);
      }
    }

    int maxSum = -1e9;
    for (int i = 0; i < n; ++i) {
      maxSum = max(maxSum, max(even[i], odd[i]));
    }

    cout << maxSum << endl;
  }

  return 0;
}
