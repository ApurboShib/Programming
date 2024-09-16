#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string s;
    for(int i=0; i<N; i++){
        s+="aa";
        s+="bb";
    }
    string ans;
    for(int i=0; i<n; i++){
       cout << s[i];
    }
    cout << endl;
    return 0;
}
