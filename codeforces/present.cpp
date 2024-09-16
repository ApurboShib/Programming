#include<bits/stdc++.h>
using namespace std;
#define end '\n'
int32_t main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
int n;
cin >> n;
int a[n+1];
for(int i=1; i<=n; i++)cin >> a[i];

for(int i=1; i<=n; i++){
    for(int j=1; j<=n; i++){
        if(a[j]==i){
            cout << j<<endl;
        }
    }
}
return 0;
}