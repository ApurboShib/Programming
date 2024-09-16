#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        priority_queue<int> pq;
        pq.push(a);
        pq.push(b);
        pq.push(c);
        pq.pop();
        cout << pq.top() << endl;
    }

    return 0;
}
