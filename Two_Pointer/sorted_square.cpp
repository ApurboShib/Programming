// normal approch..

/*#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
vector<int>ans;

#define ll long long
const int N = 1e5 + 9;

void solve(vector<int> &v){
    for(auto x : v){
        ans.push_back(abs(x));
    }
    sort(ans.begin(),ans.end());
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
    for(auto x : ans){
        cout << x * x << ' ';
    }
    cout << endl;
    
    return 0;
}*/
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;
vector<int>ans;
void solve(vector<int>&v){
    int l = 0;
    int r = v.size()-1;
    while(l<=r){
        if(abs(v[l])<abs(v[r])){
            ans.push_back(v[r]*v[r]);
            r--;
        }
        else{
            ans.push_back(v[l]*v[l]);
            l++;
        }
    }
    reverse(ans.begin(),ans.end());
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
    for(auto x : ans){
        cout << x << ' ';
    }
    cout << endl;
    return 0;
}


