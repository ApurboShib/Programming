#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        ll W;
        cin >> n >> W;

        vector<pair<int, int>> items(n);
        for (int i = 0; i < n; i++) {
            cin >> items[i].first;
            items[i].second = i + 1; // store original indices
        }

        sort(items.rbegin(), items.rend());

        ll current_weight = 0;
        vector<int> selected_items;

        for (int i = 0; i < n; i++) {
            if (current_weight + items[i].first <= (W + 1) / 2) {
                current_weight += items[i].first;
                selected_items.push_back(items[i].second);
            }

            if (current_weight >= (W + 1) / 2) {
                break;
            }
        }

        if (current_weight < (W + 1) / 2 || current_weight > W) {
            cout << -1 << endl;
        } else {
            cout << selected_items.size() << endl;
            for (int i : selected_items) {
                cout << i << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
