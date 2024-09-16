#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    int cntA1 = 0, cntA2 = 0;
    int cntB1 = 0, cntB2 = 0;

    while (a != 0)
    {

        if (a & 1 == 1)
            cntA1++;
        else
            cntA2++;
        a /= 2;
    }
    while (b != 0)
    {
        if (b & 1 == 1)
            cntB1++;
        else
            cntB2++;
        b /= 2;
    }
    if ((cntA1 == cntB1) and (cntA2 == cntB2))
        cout << "good" << endl;
    else
        cout << "bad" << endl;

    return 0;
}
