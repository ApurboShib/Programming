#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    cin.ignore(); 

    string s[t];
    for (int i = 0; i < t; i++) { 
        getline(cin, s[i]);
    }

    for (int j = 0; j < t; j++) { 
        int cnt = 0;
        for (int k = 0; k < s[j].size(); k++) {
            if (s[j][k] != ' ' && (k == 0 or s[j][k - 1] == ' ')) {
                cnt++;
            }
        }
        cout << cnt << endl; 
    }

    return 0;
}
