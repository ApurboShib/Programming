// brouthforce approch -1 .

// #include <iostream>
// #include <unordered_set>
// #include <string>
// using namespace std;

// int solve(const string &s) {
//     int ans = 0;
//     int n = s.size();

//     for (int i = 0; i < n; i++) {
//         unordered_set<char> se; 
//         for (int j = i; j < n; j++) {
//             if (se.find(s[j]) != se.end()) {
//                 break;
//             }
//             se.insert(s[j]);
//             ans = max(ans, j - i + 1);  
//         }
//     }
//     return ans;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string s;
//     cin >> s;
//     cout << solve(s) << endl;

//     return 0;
// }

// optimal approch - 1.

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int solve(string &s) {
    int ans = 0;
    if(s.size() == 0) {
        return 0;
    }
    unordered_set<char> se;
    int l = 0;
    for(int r = 0; r < s.size(); r++) {
        if(se.find(s[r]) != se.end()) {
            while(l <= r and se.find(s[r]) != se.end()) {
                se.erase(s[l]);
                l++;
            }
        }
            se.insert(s[r]);
            ans = max(ans, r - l + 1);
    }
    return ans;
}
int32_t main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   string s;
   cin >> s;
   cout << solve(s) << endl;

}



