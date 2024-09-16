#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double a, b;
    cin >> a >> b;
    // cout << abs(a-b)/100;
    // cout << (a/b)*100<<endl;
    int total = abs(a - b);
    double discount = ((double)((double)total / a) * 100);
    cout << fixed << setprecision(10) << discount << endl;

    return 0;
}
