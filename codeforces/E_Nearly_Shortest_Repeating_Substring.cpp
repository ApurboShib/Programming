#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define endl '\n'
vector<int> d;
ll div(int n) {
    for (int i = 1; i*i <= n; ++i) {
        if (n % i == 0) {
            d.push_back(i);
            if (i != n / i) {
                d.push_back(n / i);
            }
        }
        
    }
    
    return d;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;cin >> t;
    while(t--){
        int n;cin >> n;
        string s;cin >> s;
        vector<int> d = findd(n);
        bool ok=0;
        int ans=n;
        sort(d.begin(), d.end());
        for(int i = 0; i<d.size(); i++){
            string k1,k2;
            k1=s.substr(0,d[i]);
            k2=s.substr(n-d[i],d[i]);
            //cout<<k1<<" "<<k2<<endl;
            int k=0;
            int cnt1=0,cnt2=0;
            int xx=0;
            vector<string>str;
            for(int j = 0; j<n; j+=d[i]){
                string kk;
                kk=s.substr(j,d[i]);
                str.push_back(kk);
            }
            for(int j=0;j<str.size(); j++){
                for(int k=0;k<str[j].size(); k++){
                    if(str[j][k]!=k1[k]){
                        cnt1++;
                    }
                }
            }
            for(int j=0;j<str.size(); j++){
                for(int k=0;k<str[j].size(); k++){
                    if(str[j][k]!=k2[k]){
                        cnt2++;
                    }
                }
            }
            if(cnt1<=1 or cnt2<=1){
                ok=true;
                ans=d[i];
                break;
            }
        }
        cout<<ans<<endl;
    }

    
    return 0;
}