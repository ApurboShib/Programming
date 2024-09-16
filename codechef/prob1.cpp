#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio();
    cin.tie(0);
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll c = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.rbegin(), v.rend());

    // for (ll j = n - 1; j >= 0; j--)
    // {
    //     if (v[j] >= 80)
    //     {
    //         c++;
    //         for (ll i = 0; i < j; i++)
    //         {
    //             if (v[i] < 80 && v[j] - 80 >= 80 - v[i])
    //             {
    //                 c++;
    //                 v[]
    //             }
    //         }
    //     }
    // }
    for (ll i = 0; i < n; i++)
    {
        if (v[i] >= 80)
        {
            c++;
        }
    }

    for (ll j = 0, i = n-1; v[i]<80 ; i++, j--)
    {
        if (v[i] < 80 && v[j] - 80 >= 80 - v[i])
        {
            c++;
        
        }
    }

    cout << c << endl;
}
