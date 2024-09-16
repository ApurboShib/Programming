#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char ch[700];
    cin >> ch;
    int n= strlen(ch);

    bool f = false;
    for (int i = 0; i <= n - 7; i++) {
        if ((ch[i] == '0' && ch[i + 1] == '0' && ch[i + 2] == '0' &&
             ch[i + 3] == '0' && ch[i + 4] == '0' && ch[i + 5] == '0' && ch[i + 6] == '0') ||
            (ch[i] == '1' && ch[i + 1] == '1' && ch[i + 2] == '1' &&
             ch[i + 3] == '1' && ch[i + 4] == '1' && ch[i + 5] == '1' && ch[i + 6] == '1')) {
            f = true;
            break;
        }
    }

    if (f) 
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;

    return 0;
}
