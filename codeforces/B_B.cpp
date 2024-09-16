#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    int cs = 1;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        priority_queue<int> pq;
        pq.push(a);
        pq.push(b);
        pq.push(c);
        pq.pop();
        cout << "Case " << cs << ':' << ' ' << pq.top() << endl;
        cs++;
    }

    return 0;
}
