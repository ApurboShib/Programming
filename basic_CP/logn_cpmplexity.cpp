 #include <iostream>
 using namespace std;

 int main() {
   int n; cin >> n;
   long long sum = 0;
   for (int i = 1; i <= n; i *= 2) {
     sum += i;
   }
   while (n > 0) {
     sum += n;
     n /= 2;
   }
   cout << sum << '\n';
   return 0;
 }