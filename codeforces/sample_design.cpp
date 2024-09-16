#include <bits/stdc++.h>
using namespace std;
#define end '\n'

int digit_sum(int a)
{
    int sum = 0;
    while (a != 0)
    {
        int x = a % 10;
        sum += x;
        a /= 10;
    }
    return sum;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        ;
        // cout << digit_sum(23)<<endl;
        if (digit_sum(a) % b == 0)
            cout << a << end;
        else
        {
            for (int i = a; i < a + 1000; i++)
            {
                int ans = digit_sum(i);
                if (ans % b == 0)
                {
                    cout << i << end;
                    break;
                }
            }
        }
    }
    return 0;
}