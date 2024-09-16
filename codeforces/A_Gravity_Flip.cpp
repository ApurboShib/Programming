#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a, a + n);
    
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

