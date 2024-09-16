#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   string s;
   cin >> s;

   string ans = ""; // Initialize ans as an empty string
   int start = -1;  // Start index of the longest non-palindromic substring
   int mx = INT_MIN;

   for(int i = 0; i < s.size(); i++) {
       for(int j = i; j < s.size(); j++) {
           bool f = false;

           for(int k = 0; k < (j - i + 1) / 2; k++) {
               if(s[i + k] != s[j - k]) {
                   f = true;
                   break;  // If it's not a palindrome, break the loop
               }
           }

           if(f == true && j - i + 1 > mx) {
               start = i;
               mx = j - i + 1;
           }
       }
   }

   if (start != -1) { // If a non-palindromic substring was found
       ans = s.substr(start, mx);
   } else {
       ans = s[0]; // Edge case: If no non-palindromic substring found, take the first character
   }

   cout << ans << endl;

   return 0;
}
