#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;

int sum(int n){
    if (n <= 9 and n >= 0) return n;
    return sum(n / 10) + (n % 10);
}

signed main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr);

 int n;
 cin >> n;
 cout << sum (n) << endl;

 return 0;
}