#include<bits/stdc++.h>
using namespace std;
int32_t main() {
ios_base::sync_with_stdio(0);
cin.tie(0);

int n;
cin >> n;
cout << n << ' ';
while(n > 1){
    if(n % 2 == 0){
        n /= 2;
    }
    else{
        n = 3 * n + 1;
    }
    cout << n << ' ';
}
return 0;
}