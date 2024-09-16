#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n, l;
    cin >> n >> l;
    int a[n];
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a, a + n);
    
    double max_gap = 0.0;

    for (int i = 1; i < n; i++) {
        max_gap = max(max_gap, (double)(a[i] - a[i-1]));
    }

    double d = max({max_gap / 2.0, (double)a[0], (double)(l - a[n-1])});
    
    cout << fixed << setprecision(10) << d << endl;
    return 0;

}

