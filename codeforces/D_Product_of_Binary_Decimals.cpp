#include <iostream>
#include <cmath> // Include cmath for pow() function
using namespace std;

// Function to convert decimal to binary string
string toBinary(int n) {
    string r;
    while (n != 0) {
        r = (n % 2 == 0 ? "0" : "1") + r;
        n /= 2;
    }
    return r;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        bool found = false;

        for (int i = 1; i <= n; i++) {
            string binary_i = toBinary(i);
            if (stoi(binary_i) > n) 
                break;
            for (int j = 1; j <= n; j++) {
                string binary_j = toBinary(j);
                long long res = stoi(binary_i) * stoi(binary_j); 
                if (res > n){
                    cout << "YES" << endl;
                    break;
                }
                else if (res == n) {
                    found = true;
                    break;
                }
            }
            if (found)
                break;
        }
        if (!found)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
