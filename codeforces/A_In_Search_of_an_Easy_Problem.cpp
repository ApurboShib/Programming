#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n';
int32_t main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
int n;
cin >> n;
int a[n];
for(int i = 0; i < n; i++) cin >> a[i];
bool f = true;
for(int i = 0; i < n; i++){
    if(a[i] == 1) {
    f = false;
    }
}
if(f) {
    cout << "EASY" << endl;
}
else {
    cout << "HARD" << endl;
}
return 0;
}