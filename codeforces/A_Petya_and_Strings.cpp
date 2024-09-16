#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n';
int32_t main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
string a, b;
cin >> a >> b;

for(int i = 0; i < a.size(); i++){
    char ans1 = tolower(a[i]);
    char ans2 = tolower(b[i]);
    
     if(ans1 < ans2){
        cout << -1 << endl;
        return 0;
    }
    else if (ans1 > ans2){
        cout << 1 << endl;
        return 0;
    }
}
cout << 0 << endl;


return 0;
}