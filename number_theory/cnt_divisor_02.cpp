/*optimal approch, which comleity is sqrt(n)*/

#include <bits/stdc++.h>
using namespace std;
set<int> s;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i * i <= n; i++)
    {
        // if(n%i==0)cnt++;
        if (n % i == 0)
            s.insert(i);

        // if(i!=n/i)cnt++;
        if (i != n / i)
            s.insert(n / i);
    }
    cout << "Divisor are : " << '\n';
    for (auto d : s)
        cout << d << ' ';
    // cout << cnt << endl;
    cout << "Divisor cnt is = ";
    cout << s.size() << endl;
    }
    return 0;
}