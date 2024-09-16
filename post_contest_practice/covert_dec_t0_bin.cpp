#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

vector<int> v(40);

void binary_bit(int n)
{
    int bit_cnt = 0;
    while (n != 0)
    {
        int last_bit = n % 2;
        v[bit_cnt] = last_bit;
        n /= 2;
        bit_cnt++;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    binary_bit(n);
    for (auto it : v)
    {
        cout << it << ' ';
    }
    cout << endl;

    return 0;
}
