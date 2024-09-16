#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a, b;
    cin >> a >> b;
    char s[50];

    cin >> s;

    if (s[a] != '-')
    {
        cout << "No\n";
        return 0;
    }
    int length = a + b + 1;
    for (int i = 0; i < length; i++)
    {
        if (i == a)
            continue;
        if (!isdigit(s[i]))
        {
            cout << "No\n";
            return 0;
        }
    }

    cout << "Yes\n";
    return 0;
}