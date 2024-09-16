#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 1001;
signed main(){
 ios::sync_with_stdio(false);
 cin.tie(nullptr);

int n;
cin >> n;
int a[n+1];
for(int i=1; i<=n; i++){
    cin >> a[i];
}
int ans = 0;
int k = 0;
int cnt=0;
for(int i=2; i<=N; i++){
    for(int j=1; j<=n; j++){
        if(a[j]%i==0)cnt++;
    }
    if(cnt>=ans){
        k=i;
        ans = cnt;
    }
}
cout << k << endl;
return 0;
}
