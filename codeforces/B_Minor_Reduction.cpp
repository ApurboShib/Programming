#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        ll n = s.size();
        ll a = -1;
        ll sum = 0;

        for (ll i = n - 1; i >= 0; i--)
        {
            sum = (s[i] - '0') + (s[i - 1] - '0');
            if (sum > 9)
            {
                a = i;
                break;
            }
        }

        if (a != -1)
        {
            for (ll i = 0; i < a - 1; i++)
            {
                cout << s[i];
            }
            cout << sum;
            for (ll i = a + 1; i < n; i++)
            {
                cout << s[i];
            }
            cout << endl;
            continue;
        }

        cout << (s[0] - '0') + (s[1] - '0');
        for (ll i = 2; i < n; i++)
        {
            cout << s[i];
        }
        cout << endl;
    }

    return 0;
}
