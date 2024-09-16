#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    vector<int> v;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '.')
        {
            v.push_back(0);
        }
        else if (s[i] == '-' && s[i + 1] == '.')
        {
            v.push_back(1);
            i++;
        }
        else if (s[i] == '-' && s[i + 1] == '-')
        {
            v.push_back(2);
            i++;
        }
    }

    for (auto x : v)
    {
        cout << x;
    }

    return 0;
}
