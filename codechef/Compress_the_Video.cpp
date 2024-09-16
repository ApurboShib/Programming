#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    int cnt=n;
    for(int i=0; i<n; i++){
        if(v[i]==v[i+1]){
            cnt--;

        }
    }
    cout << cnt << endl;
    }
  

    return 0;
}
