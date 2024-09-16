#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &v, int n)
{
    int l = 0;
    int r = n - 1;
    while (l <= r)
    {
        swap(v[l], v[r]);
        l++;
        r--;
    }
    for (auto it : v)
        cout << it << ' ';
}

int main()
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
