/*given an array of length N and q queries of the form l,r,x. 
and add x to all of a from l to r inclusive. print the final array.*/

// brouthforce soluation. of O(n*q)...

/*#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;
int a[N],d[N],prefix[N];
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , q;
    cin >> n >> q;
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    while(q--){
        int l,r,x;
        cin >> l >> r >> x;
        for(int i=l; i<=r; i++){
            a[i]+=x;
        }
    }
    for(int i=1; i<=n; i++){
        cout << a[i]<<' ';
    }
    cout << endl;

    return 0;
}*/

// solve it optimally in complexity O(n + q);

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;
int a[N],d[N],prefix[N];
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,q;
    cin >> n >> q;
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    // calculate the difference array.
    for(int i=1; i<=n; i++){
        d[i] = a[i] - a[i-1];
    }
    while(q--){
        int l,r,x;
        cin >> l >> r >> x;
        d[l]+=x;
        d[r+1]-=x;
    }
    // back to the main array..
    for(int i=1; i<=n; i++){
        prefix[i] = prefix[i-1] + d[i];
    }
    for(int i=1; i<=n; i++){
        cout << prefix[i] << ' ';
    }
    cout << endl;
    
    return 0;
}

