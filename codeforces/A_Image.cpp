#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        set<char>se;
        for(int i = 0; i<4; i++){
            char ch;
            cin >> ch;
            se.insert(ch);
        }
        cout << se.size()-1 << endl;
    }
    
    return 0;
}
