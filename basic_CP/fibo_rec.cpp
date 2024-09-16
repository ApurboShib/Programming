#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;
int fibo(int n){
    if(n<=1)return n;
    return fibo(n-1) + fibo(n-2);
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << fibo(7)<<endl;
    return 0;
}
