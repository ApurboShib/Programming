#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    ll sum = 0;
    for (int i = 0; i < n; ++i)
    {
        ll x;
        cin >> x;
        sum += x;
    }

    cout << abs(sum) << endl;
    return 0;
}
