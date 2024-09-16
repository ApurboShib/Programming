#include <bits/stdc++.h>
using namespace std;

int main() {
  int a = 1000000000;
  int b = 1000000000;
  int product1 =  a * b ;
  long long product2 = 1LL * a * b;
  cout << "product1 = " << product1 << '\n'; // product1 = -1486618624
  cout << "product2 = " << product2 << '\n'; // product2 = 1000000000000000000
  cout << (bitset<64>(product2)) << '\n'; // prints the 64 bits binary representation of product2
  cout << (bitset<32>(product1)) << '\n'; // prints the 32 bits binary representation of product1
  return 0;
}