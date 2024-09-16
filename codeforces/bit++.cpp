#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n';
int32_t main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
int n; cin >> n;
string s;
int x = 0;
for(int i = 0; i < n; i++){
    cin >> s;
    if(s.find("++") != string::npos){
        x++;
    }
    else if(s.find("--") != string::npos){
        x--;
    }
    
}
cout << x << endl;
return 0;
}