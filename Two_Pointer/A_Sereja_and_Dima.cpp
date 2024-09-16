#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;

void solve(vector<int>& v){
    int l = 0;
    int r = v.size() - 1;
    int s = 0;
    int d = 0;
    int turn = 0;

    while(l <= r){
        if(turn % 2 == 0){
            if(v[l] > v[r]){
                s += v[l];
                l++;
            }
            else{
                s += v[r];
                r--;
            }
        }
        else{
            if(v[l] > v[r]){
                d += v[l];
                l++;
            }
            else{
                d += v[r];
                r--;
            }
        }
        turn++;
    }

    cout << s << ' ' << d << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    solve(v);

    return 0;
}
