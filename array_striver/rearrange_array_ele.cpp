// rearrange the array by using the sign, 
// not requare that the number of pos element and the number of neg element is same.
#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> solve(vector<int> &v) {
    vector<int> pos, neg;
    for(int i = 0; i < v.size(); i++) {
        if(v[i] > 0) {
            pos.push_back(v[i]);
        }
        else{
            neg.push_back(v[i]);
        }
    }
    if(pos.size() > neg.size()) {
        for(int i = 0; i < neg.size(); i++) {
            v[2 * i] = pos[i];
            v[2 * i + 1] = neg[i];
        }
        int index =  neg.size() * 2;
        for(int i = neg.size(); i < pos.size(); i++) {
            v[index] = pos[i];
            index++;
        }
    }
    else{
        for(int i = 0; i < pos.size(); i++) {
            v[2 * i] = pos[i];
            v[2 * i + 1] = neg[i];
        }
        int index =  pos.size() * 2;
        for(int i = pos.size(); i < neg.size(); i++) {
            v[index] = neg[i];
            index++;
        }
    }
    return v;
}
int32_t main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    vector <int> ans = solve(v);
    for(auto x : ans) {
        cout << x << " ";
    }
    cout << endl;
}

