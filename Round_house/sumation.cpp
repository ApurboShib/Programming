#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int first_digit = s[0] - '0';
        int last_digit = s[s.size() - 1] - '0';
        int sum = first_digit + last_digit;
        cout << "Sum = " << sum << endl;
    }
    return 0;
}