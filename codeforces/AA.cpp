#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    vector<int> v;

    for (char c : s)
    {
        if (c != '+')
        {
            v += c;
        }
        else
        {
            vs.push_back(stoi(number));
            v = " ";
        }
    }
    v.push_back(stoi(number));
    for (size_t i = 0; i < v.size(); ++i)
    {
        cout << v[i];
        if (i < v.size() - 1)
        {
            cout << "+";
        }
    }

    return 0;
}
