//Problem: Given an array of n integers, find the maximum sum of a non-empty subarray. The numbers can be negative.
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  long long ans = -1e18; // -10^18
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      // a[i...j] is a subarray
      long long sum = 0;
      for (int k = i; k <= j; k++) {
        sum += a[k];
      }
      ans = max(ans, sum);
    }
  }
  cout << ans << '\n';
  return 0;
}
//sub optimal soluation.
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  long long ans = -1e18;
  for (int i = 0; i < n; i++) {
    long long sum = 0;
    for (int j = i; j < n; j++) {
      // a[i...j] is a subarray
      sum += a[j];
      ans = max(ans, sum);
    }
  }
  cout << ans << '\n';
  return 0;
}
//optimal
#include<bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
     cin >> a[i];
  }
  long long max_subarray_sum = -1e18;
  long long sum = -1e18;
  for (int i = 0; i < n; i++) {
     sum = max((long long)a[i], a[i] + sum); // max subarray sum ending at index i
     max_subarray_sum = max(max_subarray_sum, sum);
  }
  cout << max_subarray_sum << '\n';
  return 0;
}
