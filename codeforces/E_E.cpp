#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    int cs = 1;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int sum = 0;

        for (int i = a; i <= b; i++)
        {
            if (i % 2 != 0)
                sum += i;
        }

        cout << "Case " << cs << ": " << sum << endl;
        cs++;
    }
    return 0;
}
