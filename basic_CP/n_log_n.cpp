 #include <iostream>
 using namespace std;

 int main() {
   int n; cin >> n;
   long long sum = 0;
   for (int i = 0; i < n; i++) {
     for (int j = 1; j <= n; j *= 2) {
       sum += i + j;
     }
   }
   cout << sum << '\n';
   return 0;
 }