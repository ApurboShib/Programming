#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, Q;
    cin >> N >> Q;

    string S;
    cin >> S;

    while (Q--) {
        string query;
        cin >> query;

        if (query == "pop_back") {
            S.pop_back();
        } else if (query == "front") {
            cout << S.front() << endl;
        } else if (query == "back") {
            cout << S.back() << endl;
        } else if (query == "sort") {
            int l, r;
            cin >> l >> r;
            sort(S.begin() + l - 1, S.begin() + r);
        } else if (query == "reverse") {
            int l, r;
            cin >> l >> r;
            reverse(S.begin() + l - 1, S.begin() + r);
        } else if (query == "print") {
            int pos;
            cin >> pos;
            cout << S[pos - 1] << endl;
        } else if (query == "substr") {
            int l, r;
            cin >> l >> r;
            cout << S.substr(l - 1, r - l + 1) << endl;
        } else if (query == "push_back") {
            char x;
            cin >> x;
            S.push_back(x);
        }
    }

    return 0;
}
