#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;
int GCD(int a, int b){
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a < b)
        swap(a, b);
    return GCD(a % b, b);
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << GCD(10, 5) << endl;
    return 0;
}
