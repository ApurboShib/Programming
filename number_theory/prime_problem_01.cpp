/*// suppose, we know the prime number of 1-n, and we also have a query
 ekhon find kora lagbe eto num position er prime number konta.*/

#include <bits/stdc++.h>
using namespace std;
const int N = 1e7;
// set<int>s;
vector<long long> v;
bool prime[N];
long long n = 10000007;
void seive()
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
            v.push_back(i);
        }
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    seive();
    int t;
    cin >> t;
    while (t--)
    {
        int q;
        cin >> q;
        cout << v[q - 1] << endl;
    }
    return 0;
}