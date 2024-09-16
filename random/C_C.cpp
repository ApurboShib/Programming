

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int solve(const string &s, int left, int right)
{

    while (left >= 0 && right < s.length() && s[left] == s[right])
    {
        left--;
        right++;
    }
    return right - left - 1;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string S;

    cin >> S;

    int maxL = 0;

    for (int i = 0; i < S.length(); ++i)
    {
        int len1 = solve(S, i, i);
        maxL = max(maxL, len1);
    }

    for (int i = 0; i < S.length() - 1; ++i)
    {
        int len2 = solve(S, i, i + 1);
        maxL = max(maxL, len2);
    }

    cout << maxL << endl;
    return 0;
}
