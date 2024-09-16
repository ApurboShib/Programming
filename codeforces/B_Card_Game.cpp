#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int p1[4][2] = {{a, b}, {a, b}, {b, a}, {b, a}};
        int p2[4][2] = {{c, d}, {d, c}, {c, d}, {d, c}};
        
        int ans = 0;
        for (int i = 0; i < 4; i++) {
            int ans1 = 0;
            int ans2 = 0;
            if (p1[i][0] > p2[i][0]) ans1++;
            else if (p1[i][0] < p2[i][0]) ans2++;
            if (p1[i][1] > p2[i][1]) ans1++;
            else if (p1[i][1] < p2[i][1]) ans2++;
            if (ans1 > ans2) {
                ans++;
            }
        }
        
        cout << ans << endl;
    }

}

