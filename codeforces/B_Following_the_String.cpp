#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        map<char, int> mp;

       
        for (char ch = 'a'; ch <= 'z'; ch++) {
            mp[ch] = 0;
        }

        string ans = "";

        for (int i = 0; i < n; i++) {
            for (auto& j : mp) {
                if (j.second == v[i]) {
                    mp[j.first]++;
                    ans += j.first;
                    break;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
