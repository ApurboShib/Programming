#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;
int a[N],d[N],prefix[N];
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    // finding the difference array.

    for(int i=1; i<=n; i++){
        d[i] = a[i] - a[i-1];
    }
    // print the difference array.
    for(int i=1; i<=n; i++){
        cout << d[i] << ' ';
    }
    cout << endl;

    // now back to the main array from the diffrence array.

    for(int i =1; i<=n; i++){
        prefix[i] = prefix[i-1] + d[i];
    }
    for(int i = 1; i<=n; i++){
        cout << prefix[i] << ' ';
    }
    cout << endl;
    return 0;
}
