#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2;
    cin >> s1 >> s2;
    int ind_1 = -1;
    int ind_2 = -1;
    if (s1 == s2)
        cout << "YES" << endl;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] != s2[i])
        {
            ind_1 = i;
            break;
        }
    }
    for (int i = s1.size() - 1; i >= 0; i--)
    {
        if (s1[i] != s2[i])
        {
            ind_2 = i;
            break;
        }
    }
    reverse(s1.begin() + ind_1, s1.begin() + ind_2 + 1);
    //cout << s1 << endl;
    if (s1 == s2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
