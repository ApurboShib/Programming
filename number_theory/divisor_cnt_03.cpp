/*optimal soluation using prime factorization
 */
#include <bits/stdc++.h>
using namespace std;
vector<int> primes;
int cnt_divisor(int n)
{
    int divisor = 1;
    for (int i = 0; i < primes.size(); i++)
    {
        if (n % primes[i] == 0)
        {
            int cnt = 1;
            while (n % primes[i] == 0)
            {
                n /= primes[i];
                cnt++;
            }
            divisor *= cnt;
        }
    }
    return divisor;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    return 0;
}