#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
    char ch;
    string tp, key = "qwertyuiopasdfghjkl;zxcvbnm,./";
    cin >> ch >> tp;
    
    int shift = (ch == 'L') ? 1 : -1;

    for (char c : tp) {
        c = key[key.find(c) + shift];
    }

    cout << tp << endl;

}

