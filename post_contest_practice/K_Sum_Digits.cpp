#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    char ch[n];
    for (int i = 0; i < n; i++)
        cin >> ch[i];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        // cout << "i : " << ch[i] << endl;
        sum += ch[i] - '0';
    }
    cout << sum << endl;

    return 0;
}
