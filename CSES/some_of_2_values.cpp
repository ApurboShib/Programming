#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

const int N = 1e5 + 9;

void solve(vector<pair<int, int>>& vp, int x) {
    sort(vp.begin(), vp.end());
    int l = 0;
    int r = vp.size() - 1;
    while (l <= r) {
        int sum = vp[l].first + vp[r].first;
        if (sum == x) {
            cout << vp[l].second << ' ' << vp[r].second << endl;
            return;
        } 
        else if (sum < x) {
            l++;
        } else {
            r--;
        }
    }
    if(l==r){
    cout << "IMPOSSIBLE" << endl;   
    }
    cout << "IMPOSSIBLE" << endl;  
    
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;

    vector<pair<int, int>> vp;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        vp.push_back({x, i+1});
    }

    solve(vp, x);

    return 0;
}
