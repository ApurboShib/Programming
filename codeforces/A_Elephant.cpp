#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
    int x, st = 0;
    cin >> x;
    while (x > 0) {
        int max_step = min(x, 5);
        x -= max_step;
        st++;
    }

    cout << st << endl;


}

