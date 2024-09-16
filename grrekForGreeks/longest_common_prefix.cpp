#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

string LCP(vector<string>&v){
    string s1 = v[0];
    int l = 0;
    string s2 = v[v.size()-1];
    int r = 0;
    string ans = " ";
    while(l<s1.size() && r< s2.size()){
        if(s1[l]==s2[r]){
            ans+=s1[l];
            l++;
            r++;
        }
        else{
            break;
        }
    }
    return ans;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout << LCP(v) << endl;

    return 0;
}
