//01.
/*#include<iostream>
using namespace std;
#define PI 3.1416 // notice that there is no semicolon at the end of the line
#define ADD(a, b) ((a) + (b)) // you can also define functions using macros!

int main() {
  cout << PI << '\n';
  int r = 3;
  cout << PI * r * r << '\n';

  cout << ADD(3, 4) << '\n';
  return 0;
}*/
//02.
/*#include<iostream>
using namespace std;
#define SQUARE(a) a * a

int main() {
  cout << SQUARE(3 + 4) << '\n';
  return 0;
}*/
//03
/*#include<iostream>
using namespace std;

int main() {
  cout << 3 + 4 * 3 + 4 << '\n';
  return 0;
}*/
//04
#include<iostream>
using namespace std;
#define ll long long
#define int long long // you can also redefine types using macros!

int32_t main() { // notice that we are using int32_t instead of int here because int is redefined as long long
  ll a = 5; // same as long long a = 5;
  int b = 6; // same as long long b = 6;
  cout << a << '\n';
  cout << b << '\n';
  return 0;
}
