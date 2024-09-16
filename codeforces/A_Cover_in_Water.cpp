#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x = 0;
        cin >> n;
        string s;
        cin >> s;

        size_t pos = s.find("...");
        if (pos != string::npos) {
            cout << 2 << endl;
        } else {
            x = count(s.begin(), s.end(), '.');
            cout << x << endl;
        }
    }

    return 0;
}
