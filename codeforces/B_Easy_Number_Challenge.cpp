#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 1e6 + 9;
int a[N];

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 1; i < N; i++)
    {
        for (int j = i; j < N; j += i)
        {
            a[j]++;
        }
    }

    int x, y, z;
    cin >> x >> y >> z;
    int div = 0;

    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= y; j++)
        {
            for (int k = 1; k <= z; k++)
            {
                int ans = i * j * k;
                div += a[ans];
            }
        }
    }

    cout << div << endl;
    return 0;
}
