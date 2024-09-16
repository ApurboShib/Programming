// brouthforce  approch.
#include <bits/stdc++.h>
using namespace std;

set<int> v;

bool prime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (prime(i))
        {
            v.insert(i);
        }
    }
    for (auto ele : v)
        cout << ele << ' ';
    cout << '\n';
    return 0;
}
// complexity O(N root N).