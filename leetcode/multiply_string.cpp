// Given two non-negative integers num1 and num2 represented as strings, 
// return the product of num1 and num2, also represented as a string.


#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   string a, b;
   cin >> a >> b;
    int m = a.length();
    int n = b.length();
   // dekhbo string 0 kina, taile 0 return kore dibo.

   if(a == "0" or b == "0") return 0;

    // mult ber korrar jonno string 2 take reverse kore nei.

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    vector<int> ans(m + n, 0);
    // mult ber korbo.

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            int mult = (a[i] - '0') * (b[i] - '0');
            int sum = mult + ans[i + j];
            ans [i + j] = sum % 10;
            ans [i + j + 1] += sum / 10;
        }
    }

    



}


