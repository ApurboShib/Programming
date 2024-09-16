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