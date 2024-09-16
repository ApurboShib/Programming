#include<bits/stdc++.h>
using namespace std;
#define end '\n'
int32_t main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
int n;
cin >> n;
int a[n];
for(int i=0; i<n; i++)cin >> a[i];
for(int i=0; i<n; i++){
    if(a[i]>a[i+1]){
        cout << "YES"<<end;
        cout << a[i+1] << ' ' << a[i]<<end;
        break;
    }
    else{
        cout << "NO"<<end;
        break;
    }
}
return 0;
}