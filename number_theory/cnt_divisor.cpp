/*kno number N er koyta dividor ache seta ber korte hbe..*/
#include<bits/stdc++.h>
using namespace std;
#define end '\n'

int cnt_divisor(int n){
    int divisor = 0;
    for(int i=1; i<=n; i++){
        if(n%i==0)divisor++;
    }
    return divisor;
}
int32_t main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
int n; cin >> n;
cout <<cnt_divisor(n)<<endl;
return 0;
}