#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int mx = INT_MIN;
int mn = INT_MAX;
void solve(vector<int> &v, int n)
{
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, v[i]);
        mn = min(mn, v[i]);
    }
    // for (int i = 0; i < n; i++)
    // {
    //     swap(v[mn], v[mx]);
    // }
    int min_ind = find(v.begin(), v.end(), mn) - v.begin();
    int max_ind = find(v.begin(), v.end(), mx) - v.begin();
    swap(v[min_ind], v[max_ind]);

    for (auto it : v)
        cout << it << ' ';
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    solve(v, n);

    return 0;
}
