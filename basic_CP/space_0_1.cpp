 #include <iostream>
 using namespace std;

 int main() {
   int n; cin >> n;
   long long sum = 0;
   for (int i = 0; i < (1 << n); i++) {
     sum += i;
   }
   cout << sum << '\n';
   return 0;
 }