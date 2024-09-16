// break a palindrome.

#include<bits/stdc++.h>
using namespace std;
#define ll long long

string palindrome(string &s) {
    // check one length string.
    if( s.size() == 1) {
        return "";
    }
    // check odd length string.

    for(int i = 0; i < s.size() / 2; i++) {
        if(s[i] != 'a') {
            s[i] = 'a';
            return s;
        }
    }

    // check even length string.
    s[s.size() - 1] = 'b';
    return s;

}

int32_t main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   string s;
   cin >> s;
   cout << palindrome(s) << endl;

}

