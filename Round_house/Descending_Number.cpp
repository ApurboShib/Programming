#include<bits/stdc++.h>
using namespace std;
int32_t main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
for(int i=1000; i>=1; i--){
    cout << i << " ";
    if(i%5==0){
        cout << endl;
    }
}
return 0;
}