#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    int i = 0;
    while (t--)
    {
        i++;
        int a, b;

        cin >> a >> b;
        int sum = a + b;
        cout << "Case"
             << " " << i << ":"
             << " " << sum << endl;
    }
    return 0;
}