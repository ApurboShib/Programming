#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
            v[j]++; // i is a divisor of j.
    }

    for (auto x : v)
        cout << x << ' ';
    cout << '\n';

    return 0;
}

/* seive code practice.

#include <bits/stdc++.h>
using namespace std;
const int N = 1e7;

bool prime[100000007];
set<int> s;
void seive(int n)
{

    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i] == false)
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = true;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == false)
        {
            s.insert(i);
        }
    }
    return;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    seive(n);
    for (auto x : s)
        cout << x << ' ';
    cout << '\n';
    return 0;
}*/