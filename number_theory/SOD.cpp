#include<bits/stdc++.h>
using namespace std;

int SOD ( int n ) {
    int sqrtn = sqrt ( n );
    int res = 0;
    for ( int i = 1; i < sqrtn; i++ ) {
        if ( n % i == 0 ) {
            res += i; //"i" is a divisor
            res += n / i; //"n/i" is also a divisor
        }
    }
    if ( n % sqrtn == 0 ) {
        if ( sqrtn * sqrtn == n ) res += sqrtn; //Perfect Square.
        else {
            res += sqrtn; //Two different divisor
            res += n / sqrtn;
        }
    }
    return res;
}

int32_t main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
int n; cin >>n;
cout<<SOD(n)<<endl;
return 0;
}