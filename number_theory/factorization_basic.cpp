
/*factorization holo je , 1 ta number thakbe jetake amara prime number
diye represent korte parbo..
for example = n = 24  -> 2,2,2,3*/

#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            int cnt = 0;
            while (n % i == 0)
            {
                cnt++;
                n /= i;
            }
            cout << i << '^' << cnt << ' ';
        }
        // cout << '\n';
    }
    return 0;
}