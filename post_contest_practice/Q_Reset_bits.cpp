#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    /*last k ta bit reset kora lagbe mane zero kora lagbe*/
    cout << (n & (1 << 30) - (1 << k)) << endl;

    return 0;
}
