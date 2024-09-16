// #include <bits/stdc++.h>
// using namespace std;
// #define endl '\n'
// #define ll long long
// const int N = 1e6 + 7;
// const int MOD = 1e9 + 7;

// ll fibo[N];

// signed main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     fibo[0] = 0;
//     fibo[1] = 1;

//     // Calculate the sum of squares of Fibonacci numbers
//     ll sum = fibo[0] * fibo[0] % MOD;
//     for(int i = 2; i < N; i++){  
//         fibo[i] = (fibo[i-1] + fibo[i-2]) % MOD;
//         sum = (sum + fibo[i] * fibo[i] % MOD) % MOD;
//     }

//     int t;
//     cin >> t;
//     int tc = 1;
//     while(t--){
//         int n;
//         cin >> n;
//         cout << "Case "<< tc++ << ": " << sum << endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
const int N = 1e9+7;
 
int main()
{
    ios_base::sync_with_stdio();
    cin.tie(0);
    ll t , tc=1;
    cin>>t;
    while(t--)
    {  ll n;
       cin>>n;
       int a[n];
       a[0] = 0;
       a[1] = 1;
       ll sum = 1;
       for(ll i=2; i<n; i++){
        a[i] = (a[i-1] + a[i-2])%N;
        sum = (sum + a[i]*a[i])%N;
       }
       cout<<"Case "<<tc++<<": "<<sum<<endl;
    }
}