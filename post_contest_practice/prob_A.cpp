#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    while(cin>>n){
        vector<int>v(n);
        for(int i=0; i<n; i++)cin >> v[i];
        int f = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(v[j]>v[j+1]){
                    swap(v[j],v[j+1]);
                    f++;
                }
            }
        }
        cout << f << endl;
    }

    return 0;
}
