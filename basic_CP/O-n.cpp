 #include <iostream>
 using namespace std;

 int main() {
   int n; cin >> n;
   long long sum = 0;
   for (int i = 0; i < n; i++) {
     sum += i;
   }
   for (int i = 0; i < n / 2; i++) {
     sum += i;
   }
   cout << sum << '\n';
   return 0;
 }