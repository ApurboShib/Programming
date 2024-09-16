#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    int mn = INT_MAX;
    int ind = -1;

    for (int i = 1; i <= n; i++)
    {
        if (v[i] < mn)
        {
            mn = v[i];
            ind = i;
        }
    }

    cout << mn << ' ' << ind << endl;

    return 0;
}
