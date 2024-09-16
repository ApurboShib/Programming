// optimal way to find the all divisor .

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 1; i * i < n; i++)
    {
        if (n % i == 0)
            v.push_back(i);
        if (i != n / i)
            v.push_back(n / i);
    }

    sort(v.begin(), v.end());
    for (auto &x : v)
        cout << x << ' ';
    return 0;
}
