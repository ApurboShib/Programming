// find the triplets with zero sum..

// brouthforece approch. with complexity n^3.

/*#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    bool found = false;

    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (v[i] + v[j] + v[k] == 0) {
                    found = true;
                    break;
                }
            }
            if (found) break;
        }
        if (found) break;
    }

    if (found) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}*/

// solve it optimally. n^2.

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    int cnt = 0;
    for(int i=0; i<n; i++){
        unordered_set<int>us;
        for(int j=i+1; j<n; j++){
            int sum = -(v[i] + v[j]);
            if(us.find(sum)!=us.end()){
               // cout << "("<<sum << ',' << v[i] << ',' << v[j]<<")"<<endl;
               cout << sum << ' ' << v[i] << ' ' << v[j] << endl;
                cnt++;
            }
            else{
                us.insert(v[j]);
            }
        }
    }
    cout << cnt << endl;
    return 0;
}

