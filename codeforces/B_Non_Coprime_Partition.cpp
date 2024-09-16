#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    if(n <= 2) {
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;
    cout << n - 1;
    for(int i = 1; i <= n - 1; i++) 
    cout << " " << i;
    cout << endl;
    cout << 1 << " " << n << endl;
    return 0;
}
