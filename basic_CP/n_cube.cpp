 #include <iostream>
 using namespace std;

 int main() {
   int n; cin >> n;
   long long sum = 0;
   for (int i = 0; i < n; i++) {
     for (int j = 0; j < n; j++) {
       for (int k = 0; k < n; k++) {
         sum += i + j + k;
       }
     }
   }
   cout << sum << '\n';
   return 0;
 }