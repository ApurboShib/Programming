#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool canMakeArrayEqual(vector<int>& arr) {
  // Find the greatest common divisor (GCD) of all elements in the array.
  int gcd = arr[0];
  for (int i = 1; i < arr.size(); i++) {
    gcd = __gcd(gcd, arr[i]);
  }

  // If the GCD is greater than 1, then it is possible to make all elements
  // in the array equal by applying the operation a certain number of times.
  return gcd > 1;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    bool canMakeEqual = canMakeArrayEqual(arr);

    if (canMakeEqual) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
