/*How to find the number of integers under n that has an odd number of divisors?*/


/*When does a number have an odd number of divisors? Try finding the first 4
4 of such numbers. Can you find a pattern? What is happening here?*/


#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 1; i * i < n; i++)
    {
        cout << i * i << endl;
    }
    return 0;
}
