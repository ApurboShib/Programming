#include<bits/stdc++.h>
using namespace std;

void prime(int n){
    int cnt = 0;
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            cnt++;
            while(n%i==0){
                
                n/=i;
            }
        }
    }
    if(n>1){
        cnt++;
        cout << cnt <<endl;
    }
}
int32_t main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
int n;
while(cin >> n){
    if(n==0)break;

    cout << n << ' ';
    prime(n);
}
return 0;
}