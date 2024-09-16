#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

#define endl '\n'

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int X1, Y1, X2, Y2;
    cin >> X1 >> Y1 >> X2 >> Y2;

    double ans = pow(X2 - X1, 2) + pow(Y2 - Y1, 2);

    double distance = sqrt(ans);

    cout << fixed << setprecision(9) << distance << endl;

    return 0;
}
