#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(n%2!=0){
            cout << "Bob"<<endl;
        }
        else{
            if((n&(n-1))==0){
                int cnt = 0;
                while(n!=0){
                    n/=2;
                    cnt++;
                }
                if(cnt%2!=0)
                cout << "Alice"<<endl;
                else cout  << "Bob"<<endl;
                
            }
            else cout << "Alice"<<endl;
           
        }
    }
    
    return 0;
}
