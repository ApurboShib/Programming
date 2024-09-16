#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, Q;
    cin >> N;
    string s;
    cin >> s;
    cin >> Q;

    vector<set<int>> pos(26);
    for (int i = 0; i < N; ++i)
    {
        pos[s[i] - 'a'].insert(i);
    }

    for (int qi = 0; qi < Q; ++qi)
    {
        int t, a;
        cin >> t >> a;

        if (t == 1)
        {
            a--;
            char b;
            cin >> b;
            pos[s[a] - 'a'].erase(a);
            pos[b - 'a'].insert(a);
            s[a] = b;
        }
        else if (t == 2)
        {
            a--;
            int b;
            cin >> b;
            b--;
            int ans = 0;
            for (int i = 0; i < 26; ++i)
            {
                auto i1 = pos[i].lower_bound(a);
                auto i2 = pos[i].upper_bound(b);
                if (i1 != i2)
                    ans++;
            }
            printf("%d\n", ans);
        }
    }
    return 0;
}
