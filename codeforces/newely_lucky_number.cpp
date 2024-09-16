#include <bits/stdc++.h>
using namespace std;
int cnt_dig(long long n)
{
    long long cnt = 0;
    while (n != 0)
    {
        if (n % 10 == 4 or n % 10 == 7)
            cnt++;
        n /= 10;
    }
    return cnt;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin >> n;
    if (cnt_dig(n) == 4 or cnt_dig(n) == 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}