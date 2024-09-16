#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int A, B, C, K;

    cin >> A >> B >> C >> K;

    int numA = min(A, K);
    int numB = min(B, max(0, K - A));
    int numC = min(C, max(0, K - A - B));

    int maxSum = numA * 1 + numB * 0 + numC * (-1);

    cout << maxSum << endl;

    return 0;
}
