#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        bool v1[13] = {false};
        bool v2[13] = {false};
        
        if (a > b) swap(a, b);
        
        int k = a;
        for (int i = a; i <= b; i++) {
            v1[k] = true;
            k++;
            if (k == 13) k = 1;
        }
        
        k = a;
        while (k != b) {
            v2[k] = true;
            k--;
            if (k == 0) k = 12;
        }
        v2[b] = true;
        
        bool f1 = !v1[c] and !v1[d];
        bool f2 = !v2[c] and !v2[d];
        
        if (f1 || f2)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    
    return 0;
}
