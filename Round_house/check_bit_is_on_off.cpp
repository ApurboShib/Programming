#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
// check the last bit = (x&1)
bool check_last_bit(int x)
{
    return (x & 1);
}
// check the kth bit
bool check_the_kth_bit(int x, int k)
{
    return (x >> k) & 1;
}
// ekta number er kon kon bit ta on ache seta check kore lagbe;

void check_on_bit(int x)
{
    for (int i = 0; i < 32; i++)
    {
        if (check_the_kth_bit(x, i))
            cout << i << ' ';
    }
    cout << endl;
}
// print the all off bits.
void check_off_bit(int x)
{
    for (int i = 0; i < 32; i++)
    {
        if (!check_the_kth_bit(x, i))
            cout << i << ' ';
    }
    cout << endl;
}
// count the on bits;
void cnt_on_bit(int x)
{
    int cnt = 0;
    for (int i = 0; i < 32; i++)
    {
        if (check_the_kth_bit(x, i))
            cnt++;
    }
    cout << "the cnt of the on bits are : " << cnt << endl;
}
// cnt the off bits.
void cnt_off_bit(int x)
{
    int cnt = 0;
    for (int i = 0; i < 32; i++)
    {
        if (!check_the_kth_bit(x, i))
            cnt++;
    }
    cout << "the cnt of the off bits are : " << cnt << endl;
}
// check that the number is even or odd.
bool check(int x)
{
    if (check_last_bit(x))
        return false;
    else
        return true;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x = 11;
    cout << boolalpha << check_last_bit(x) << endl;
    cout << boolalpha << check_the_kth_bit(x, 3) << endl;
    check_on_bit(x);
    check_off_bit(x);
    cnt_on_bit(x);
    cnt_off_bit(x);
    cout << boolalpha << check(x) << endl;
    return 0;
}
