// find the four value that sum to a given value.
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;
void solve(vector<int> &v, int x){
    sort(v.begin(), v.end());
    int cnt = 0;
    for(int i=0; i<v.size(); i++){
        for(int j = i+1; j<v.size(); j++){
            int l = j+1;
            int r = v.size()-1;
            while(l<=r){
                int sum = v[i] + v[j] + v[l] + v[r];
                if(sum==x){
                    cout << v[i] << ' ' << v[j] << ' '<< v[l] << ' ' << v[r] << endl;
                    cnt ++;
                }
                if(sum < x){
                    l++;
                }
                else{
                    r--;
                }
            }
        }
    }
    cout << cnt << endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    int x;
    cin >> x;
    solve(v, x);
    return 0;
}
