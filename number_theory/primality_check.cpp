#include <bits/stdc++.h>
using namespace std;

bool prime(int n)
{
    if (n < 2)
        return false;
    if (n <= 3)
        return true;
    for (int i = 2; i < n; i++)
    {
        if (n % i != 0)
            return true;
    }
    return false;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    cout << prime(n) << endl;

    return 0;
}
// complexity O(n).