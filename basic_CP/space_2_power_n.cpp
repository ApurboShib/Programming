 #include <iostream>
 using namespace std;

 int main() {
   int n; cin >> n;
   int sum = 0;
   int a[1 << n];
   for (int i = 0; i < (1 << n); i++) {
     cin >> a[i];
     sum += a[i];
   }
   cout << sum << '\n';
   return 0;
 }