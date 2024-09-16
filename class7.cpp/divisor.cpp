// native approch for divisor.

/*#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;
vector<int>divisor;
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        if(n%i==0)divisor.push_back(i);
    }
    for(auto &x : divisor){
        cout << x << ' ';
    }
    cout << endl;
    return 0;
}*/

// better approch in complexity sqrt(n);

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;
vector<int> divisor;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i=1; i*i<=n; i++){
        if(n%i==0) divisor.push_back(i);
        if(i!=n/i) divisor.push_back(n/i);
    }
    sort(divisor.begin(), divisor.end());
    for(auto x : divisor){
        cout << x << ' ';
    }
    cout << endl;
    
    return 0;
}

