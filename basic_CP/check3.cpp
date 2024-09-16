#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;
struct Person {
    string s;
    int d;
    int mm;
    int y;
};

bool solve(Person a, Person b) {
    if (a.y != b.y) return a.y < b.y;
    if (a.mm != b.mm) return a.mm < b.mm;
    return a.d < b.d;
}

signed main() {
    int n;
    cin >> n;

    vector<Person> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i].s >> v[i].d >> v[i].mm >> v[i].y;
    }
    sort(v.begin(), v.end(), solve);

    auto ans1 = v[0];
    auto ans2 = v[n - 1];

    cout << ans1.s << endl;
    cout << ans2.s << endl;

    return 0;
}
