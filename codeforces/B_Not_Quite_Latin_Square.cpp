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
        string row1, row2, row3;
        cin >> row1 >> row2 >> row3;

        string ans = "";

        for (int i = 0; i < 3; i++)
        {
            int cntA = 0, cntB = 0, cntC = 0;
            for (int j = 0; j < 3; j++)
            {
                cntA += (row1[j] == 'A' || row2[j] == 'A' || row3[j] == 'A');
                cntB += (row1[j] == 'B' || row2[j] == 'B' || row3[j] == 'B');
                cntC += (row1[j] == 'C' || row2[j] == 'C' || row3[j] == 'C');
            }
            if (cntA == 2)
                ans = "A";
            if (cntB == 2)
                ans = "B";
            if (cntC == 2)
                ans = "C";
        }

        cout << ans << endl;
    }
    return 0;
}
