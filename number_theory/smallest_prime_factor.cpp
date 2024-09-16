// smalest prime factor...

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> div;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            div.push_back(i);
        }
        if (i != n / i)
            div.push_back(n / i);
    }
    sort(div.begin(), div.end());

    // for(auto &x : div)cout << x << ' ';
    cout << div[0] << endl;
    return 0;
}
