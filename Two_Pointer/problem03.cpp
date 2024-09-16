// find the closest pair from 2 sorted array to x..

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;
void solve(vector<int>&v1, vector<int>&v2, int x){
    int l = 0;
    int r= v2.size()-1;
    int idx1,idx2;
    int diff = INT_MAX;
    while(l<v1.size() && r>=0){
        int sum = v1[l] + v2[r];
        if(abs(sum-x)<diff){
            idx1 = l;
            idx2 = r;
            diff = abs(sum-x);
        }
        if(sum < x){
            l++;
        }
        else{
            r--;
        }
    }
    cout << idx1 << " " << idx2 <<endl;
    cout << v1[idx1] << " " << v2[idx2] <<endl;

}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin >> n >> m;
    vector<int>v1(n),v2(m);
    for(int i=0; i<n; i++){
        cin >> v1[i];
    }
    for(int i=0; i<m; i++){
        cin >> v2[i];
    }
    int x;
    cin >> x;
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    solve(v1,v2,x);
    return 0;
}
