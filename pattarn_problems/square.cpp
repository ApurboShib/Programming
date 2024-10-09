// print  a square pattarn..

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n;
   cin >> n;

    for(int i = 1; i <=n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << j << ' ';
        }
        cout << endl;
    }

}

