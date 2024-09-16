#include <bits/stdc++.h>
using namespace std;

const int N = 50;
long long fib[N + 1];
int main()
{
    int n;
    cin >> n;
    fib[1] = 0;
    fib[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    cout << fib[n] << '\n';
    return 0;
}