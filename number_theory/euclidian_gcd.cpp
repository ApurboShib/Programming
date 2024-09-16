// Euclidian theorem.

#include <bits/stdc++.h>
using namespace std;

// int gcd(int a, int b) {
//     if (b == 0) {
//         return a;
//     }
//     return gcd(b, a % b);
// }
int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    return gcd(b % a, a);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a, b;
    cin >> a >> b;
    cout << gcd(abs(a), abs(b)) << "\n";
    int lcm = (a * b) / (gcd(a, b));
    cout << "LCM = " << lcm << '\n';
    return 0;
}
