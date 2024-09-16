#include<bits/stdc++.h>
using namespace std;

const int N = 1e7 + 9;
int d[N];

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  // Generate the array of divisors
  for (int i = 1; i < N; i++) {
    for (int j = i; j < N; j += i) {
      d[j]++;
    }
  }

  // Identify prime numbers
  vector<int> primes;
  for (int i = 1; i < N; i++) {
    if (d[i] == 2) {
      primes.push_back(i);
    }
  }

  // Print the count of prime numbers and the prime numbers themselves
  cout << "Number of prime numbers: " << primes.size() << '\n';
  cout << "Prime numbers: ";
  for (int prime : primes) {
    cout << prime << " ";
  }
  cout << '\n';

  return 0;
}
