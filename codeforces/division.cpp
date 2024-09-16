#include <bits/stdc++.h>
using namespace std;
#define end '\n'
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int rating;
        cin >> rating;
        if (rating >= 1900)
        {
            cout << "Division 1" << endl;
        }
        else if (rating >= 1600 && rating <= 1899)
        {
            cout << "Division 2" << endl;
        }
        else if (rating >= 1400 && rating <= 1599)
        {
            cout << "Division 3" << endl;
        }
        else
        {
            cout << "Division 4" << endl;
        }
    }
    return 0;
}