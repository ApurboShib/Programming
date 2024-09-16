#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool f = true;
    for (int i = 1; i < s.length(); i++) {
        if (islower(s[i])) {
            f = false;
            break;
        }
    }

    if (f) {
        for (char &c : s) {
            c = islower(c) ? toupper(c) : tolower(c);
        }
    }

    cout << s << endl;

    return 0;
}
