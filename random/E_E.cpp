#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> A(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    int cnt = 1;
    int prev = A[0];

    for (int i = 1; i < n; ++i)
    {
        if (A[i] - prev >= k)
        {
            cnt++;
            prev = A[i];
        }
    }

    cout << cnt << endl;
    return 0;
}
