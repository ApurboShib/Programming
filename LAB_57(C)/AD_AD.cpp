#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        std::cin >> n;

        int max_height = (floor((-1 + sqrt(1 + 8 * (n))) / 2));

        cout << max_height << endl;
    }
    return 0;
}
