#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

vector<bool> primes;

bool isPrime(int n)
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

bool PrimeDiv(int n)
{
    int divCnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            if (primes[i])
            {
                divCnt++;
            }
        }
    }
    if (divCnt == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    // pre-calculate primes up to n
    primes.resize(n + 1);
    for (int i = 1; i <= n; i++)
    {
        primes[i] = isPrime(i);
    }

    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (PrimeDiv(i))
            cnt++;
    }
    cout << cnt << endl;

    return 0;
}
