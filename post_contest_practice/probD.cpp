#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    while (cin >> s) {
        int sum = 0;
        for (int i = 0; i < s.size(); i++) {  
            int dig;
            if (isupper(s[i])) {
                dig = s[i] - 'A' + 27;
            } else if (islower(s[i])) {  
                dig = s[i] - 'a' + 1;
            } else {
                continue;  
            }
            sum += dig;
        }
        if (isPrime(sum))
            cout << "It is a prime word." << endl;
        else
            cout << "It is not a prime word." << endl;
    }

    return 0;
}
