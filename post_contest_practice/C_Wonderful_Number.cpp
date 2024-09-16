#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

bool is_odd(ll n)
{
    return (n % 2 != 0);
}

bool isPalindrome(ll n)
{
    vector<int> v;

    int bit_cnt = 0;
    while (n > 0)
    {
        int last_bit = n % 2;
        v.push_back(last_bit);
        n /= 2;
        bit_cnt++;
    }

    for (int i = 0; i < bit_cnt / 2; i++)
    {
        if (v[i] != v[bit_cnt - i - 1])
            return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    if (is_odd(n) && isPalindrome(n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
