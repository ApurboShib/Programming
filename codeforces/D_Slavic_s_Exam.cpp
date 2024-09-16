#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;

        int j = 0;  
    
        for (int i = 0; i < s1.size(); ++i) {
            if (j < s2.size() && s1[i] == s2[j]) {
              
                ++j;
            } 
            else if (s1[i] == '?') {
               
                if (j < s2.size()) {
                    s1[i] = s2[j++];
                } 
                else {
                  
                    s1[i] = 'a';
                }
            }
        }
        if (j == s2.size()) {
            cout << "YES" << endl;
            cout << s1 << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
