#include <bits/stdc++.h>
using namespace std;

char getDifferentChar(char a, char b) {
    for (char c = 'a'; c <= 'z'; ++c) {
        if (c != a && c != b) {
            return c;
        }
    }
    return 'a'; // Fallback, should never hit this
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n >> t;

    string s1, s2;
    cin >> s1 >> s2;

    vector<int> diff_pos;
    for (int i = 0; i < n; ++i) {
        if (s1[i] != s2[i]) {
            diff_pos.push_back(i);
        }
    }

    int diff_count = diff_pos.size();
    int same_count = n - diff_count;

    // Calculating the feasible t values
    int max_t = n - diff_count;
    int min_t = (diff_count + 1) / 2;

    if (t < min_t || t > max_t) {
        cout << -1 << endl;
        return 0;
    }

    string s3 = s1;

    int common_used = 0, diff_used = 0;

    for (int i = 0; i < n; ++i) {
        if (s1[i] == s2[i]) {
            if (common_used < (n - t)) {
                s3[i] = s1[i];
                ++common_used;
            } else {
                s3[i] = getDifferentChar(s1[i], s2[i]);
            }
        } else {
            if (diff_used < (diff_count - (n - t))) {
                s3[i] = getDifferentChar(s1[i], s2[i]);
                ++diff_used;
            } else {
                s3[i] = s1[i];
            }
        }
    }

    cout << s3 << endl;
    return 0;
}
