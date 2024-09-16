#include <iostream>
#include <string>

using namespace std;

int main() {
   int n, k;
   string t;

   cin >> n >> k;
   cin >> t;

   string s = t;
   while (k > 1) {
       s += t[n - 1] + t;
       k--;
   }

   cout << s << endl;

   return 0;
}
