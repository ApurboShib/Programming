// using optimal soluation.
// using seive.

#include <bits/stdc++.h>
using namespace std;
#define MAX 1e7

set<int> s;
bool prime[100000007];

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
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    seive(n);
    for (auto u : s)
        cout << u << ' ';
    return 0;
}