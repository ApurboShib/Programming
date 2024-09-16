#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long  n;
    cin >> n;
   long long  fibo[n + 1];
    fibo[1] = 0;
    fibo[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    cout << fibo[n] << endl;

    return 0;
}
