#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int odd = 0;
    map<char, int> mp;
    for (auto it : s)
    {
        mp[it]++;
    }
    deque<char> dq;
    for (auto it : mp)
    {
        if (it.second % 2 != 0)
        {
            odd++;
            for (int i = 0; i < it.second; i++)
            {
                dq.push_back(it.first);
            }
        }
    }
    if (odd > 1)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    else
    {
        for (auto it : mp)
        {
            if (it.second % 2 == 0)
            {
                int x = it.second;
                x = x / 2;
                int z = x;
                while (x--)
                {
                    dq.push_front(it.first);
                }
                while (z--)
                {
                    dq.push_back(it.first);
                }
            }
        }
    }
    for (auto it : dq)
    {
        cout << it;
    }
    cout << endl;

    return 0;
}
