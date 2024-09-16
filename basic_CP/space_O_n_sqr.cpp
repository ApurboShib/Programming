 #include <iostream>
 using namespace std;

 int main() {
   int n; cin >> n;
   int sum = 0;
   int a[n][n];
   for (int i = 0; i < n; i++) {
     for (int j = 0; j < n; j++) {
       cin >> a[i][j];
       sum += a[i][j];
     }
   }
   cout << sum << '\n';
   return 0;
 }