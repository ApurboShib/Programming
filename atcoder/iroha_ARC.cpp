#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    char a[k];
    for(int i = 0; i< k; i++){
        cin >> a[i];
    }
    while(true){
        bool f = true;
        string ans = to_string(n);
        for(int i = 0; i< ans.size(); i++){
            for(int j = 0; j < k; j++){
                if(ans[i] == a[j])f = false;
            }
        }
        if(f)break;
        n++;
    }
    cout << n << endl;

    return 0;
}
