#include <bits/stdc++.h>
using namespace std;
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
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a, b;
    cin >> a >> b;

    int LCM = (a * b) / gcd(a, b);
    if (isPrime(LCM))
        cout << "Prime" << endl;
    else
        cout << "Not prime" << endl;

    return 0;
}