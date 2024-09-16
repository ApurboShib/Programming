// find the triplate such that sum of two value equal toh the third value.

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;
void solve(vector<int>&v){
    sort(v.begin(), v.end());
    for(int i = 0; i<v.size(); i++){
        int l = i+1;
        int r = v.size()-1;
        while(l<=r){
            int sum = v[i] + v[l];
            if(sum == v[r]){
                cout << v[i] << ' ' << v[l] << ' ' << v[r] << endl;
                
            }
            if(sum>=v[r]){
                l++;
            }
            else{
                r--;
            }
        }
    }
    
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
    solve(v);
    return 0;
}
