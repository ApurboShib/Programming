#include <bits/stdc++.h>
using namespace std;
void f(string &sum)
{
    vector<int> v;
    string ans;
    for (char c : sum)
    {
        if (c == '+')
        {
            if (!ans.empty())
            {
                v.push_back(stoi(ans));
                ans.clear();
            }
        }
        else
        {
            ans += c;
        }
    }
    if (!ans.empty())
    {
        v.push_back(stoi(ans));
    }

    sort(v.begin(), v.end());

    sum.clear();
    for (size_t i = 0; i < v.size(); ++i)
    {
        sum += to_string(v[i]);
        if (i < v.size() - 1)
        {
            sum += "+";
        }
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;

    f(s);

    cout << s << endl;

    return 0;
}
