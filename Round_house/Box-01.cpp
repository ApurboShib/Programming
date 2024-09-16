#include<bits/stdc++.h>
using namespace std;
int32_t main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
int t;
cin >> t;

for(int i=1; i<=t; i++){
    int n; cin >> n;
    for(int j=1; j<=n; j++){
        for(int k = 1; k<=n;k++)
        cout << '*';
        cout << endl;
    
    }
        if(i!=t)cout << endl;
}
}