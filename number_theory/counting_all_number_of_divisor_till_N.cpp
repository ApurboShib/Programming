/*counting all number of divisor till N */
#include <bits/stdc++.h>
using namespace std;

set<int> s;

int cnt_dividor(int n)
{
    int cnt = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
            s.insert(i);

        if (i != n / i)
            s.insert(n / i);
    }
    return s.size();
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        cout << "cnt is = " << cnt_dividor(n) << '\n';
        for (auto d : s)
            cout << d << ' ';
        cout << '\n';
    }
    return 0;
}
// conplexity O(sqrt(n)).
// it is very closed to nroot n.