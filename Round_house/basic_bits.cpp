#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // left shift.
    // x << 1 = 2^x;

    // x >>1 = 2/x;

    int p = 11;
    cout << (p << 1) << endl; // 11 * 2 = 22;
    cout << (p >> 1) << endl; // 11/2 = 5;
    // check the bis is on or off.
    // if the bit is '1', then the bit is on but if the bit is '0', then the bit is off.
    // check the last bit = (x&1).
    int x = 11;
    // if (x & 1 == 0)
    //     cout << "bit off." << endl;
    // else
    //     cout << "bit on." << endl;

    // check the kth bit is on or off.
    int k = 3;
    if (((x >> k) & 1) == 0)
        cout << "kth bit is off." << endl;
    else
        cout << "kth bit is off." << endl;

    return 0;
}
