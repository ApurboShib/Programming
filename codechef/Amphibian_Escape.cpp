#include <iostream>

using namespace std;

long long countValidPairs(int N, int K, int H) {
  // Calculate the maximum height the frog can reach in K jumps
  long long max_height = (long long)N * K;

  // Frog can't escape if max_height is less than the well height
  if (max_height < H) {
    return 0;
  }

  // Count valid pairs (A, B)
  long long count = 0;
  for (int A = 1; A <= N; A++) {
    // Minimum slipperiness required for the frog to escape within K jumps
    int min_slip = max(0, (A * K - H) / K);

    // Count valid pairs for this jumping power (A)
    count += (N - min_slip + 1);
  }

  return count;
}

int main() {
  int T;
  cin >> T;

  while (T--) {
    int N, K, H;
    cin >> N >> K >> H;

    long long count = countValidPairs(N, K, H);
    cout << count << endl;
  }

  return 0;
}
