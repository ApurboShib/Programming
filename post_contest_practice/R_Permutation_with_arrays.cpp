#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
        cin >> v1[i];
    vector<int> v2(n);
    for (int i = 0; i < n; i++)
        cin >> v2[i];
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    bool flag = true;

    for (int i = 0; i < n; i++)
    {
        if (v1[i] != v2[i])
        {
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    return 0;
}
